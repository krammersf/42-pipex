/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:54:15 by fde-carv          #+#    #+#             */
/*   Updated: 2023/06/20 12:26:56 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex_bonus.h"

/* Child process that create a fork and a pipe, put the output inside a pipe
 and then close with the exec function. The main process will change his stdin
 for the pipe file descriptor. */
void	child_process_bonus(char *av, char **envp)
{
	pid_t	pid;
	int		fd[2];

	if (pipe(fd) == -1)
		error();
	pid = fork();
	if (pid == -1)
		error();
	if (pid == 0)
	{
		close(fd[0]);
		dup2(fd[1], STDOUT_FILENO);
		execute(av, envp);
	}
	else
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		waitpid(pid, NULL, 0);
	}
}

/* Function who make a child process that will read from the stdin with
 get_next_line until it find the limiter word and then put the output inside a
 pipe. The main process will change his stdin for the pipe file descriptor. */

void	here_doc(char *limiter, int ac)
{
	if (ac < 5)
		message2();
	child_process_here_doc(limiter);
}

void	child_process_here_doc(char *limiter)
{
	int		fd[2];
	char	*line;
	pid_t	reader;

	if (pipe(fd) == -1)
		error();
	reader = fork();
	if (reader == 0)
	{
		close(fd[0]);
		while (get_next_line(&line))
		{
			if (ft_strncmp(line, limiter, ft_strlen(limiter)) != 0)
				write(STDIN_FILENO, "\033[34mhere_doc> \033[0m", 20);
			else if (ft_strncmp(line, limiter, ft_strlen(limiter)) == 0)
				exit(EXIT_SUCCESS);
			write(fd[1], line, ft_strlen(line));
		}
	}
	else
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		wait(NULL);
	}
}

/* Main function that run the childs process with the right file descriptor
 or display an error message if arguments are wrong. It will run here_doc
 function if the "here_doc" string is find in argv[1] */
int	main(int ac, char **av, char **envp)
{
	int	i;

	if (ac >= 5)
	{
		if (ft_strncmp(av[1], "here_doc", 8) == 0)
		{
			write(STDIN_FILENO, "\033[34mhere_doc> \033[0m", 20);
			i = 3;
			open_file(av[ac - 1], 0);
			here_doc(av[2], ac);
		}
		else
		{
			i = 2;
			open_file(av[ac - 1], 1);
			open_file(av[1], 2);
			dup2(open_file(av[1], 2), STDIN_FILENO);
		}
		while (i < ac - 2)
			child_process_bonus(av[i++], envp);
		dup2(open_file(av[ac - 1], 1), STDOUT_FILENO);
		execute(av[ac - 2], envp);
	}
	message2();
}
