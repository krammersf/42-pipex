/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:54:59 by fde-carv          #+#    #+#             */
/*   Updated: 2023/06/20 12:26:48 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

/* Child process that run inside a fork, take the filein, put the output inside
 a pipe and then close with the exec function */
void	child_process(char **av, char **envp, int *fd)
{
	int		file_in;

	file_in = open(av[1], O_RDONLY, 0777);
	if (file_in == -1)
		error();
	dup2(fd[1], STDOUT_FILENO);
	dup2(file_in, STDIN_FILENO);
	close(fd[0]);
	execute(av[2], envp);
}

/* Parent process that take the data from the pipe, change the output
for the fileout and also close with the exec function */
void	parent_process(char **av, char **envp, int *fd)
{
	int		file_out;

	file_out = open(av[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (file_out == -1)
		error();
	dup2(fd[0], STDIN_FILENO);
	dup2(file_out, STDOUT_FILENO);
	close(fd[1]);
	execute(av[3], envp);
}

/* Main function that run the child and parent process or display an
error message if arguments are wrong */
int	main(int ac, char **av, char **envp)
{
	int		fd[2];
	pid_t	pid1;

	if (ac == 5)
	{
		if (pipe(fd) == -1)
			error();
		pid1 = fork();
		if (pid1 == -1)
			error();
		if (pid1 == 0)
			child_process(av, envp, fd);
		waitpid(pid1, NULL, 0);
		parent_process(av, envp, fd);
	}
	else
	{
		ft_putstr_fd("\033[31mError: Bad arguments\n", 2);
		ft_putstr_fd("\033[33mEx: ./pipex <file1> <cmd1> <cmd2> <file2>\n", 1);
		exit(1);
	}
	return (0);
}
