/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:57:22 by fde-carv          #+#    #+#             */
/*   Updated: 2023/06/20 12:26:53 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

/* A custom error displaying function. */
void	custom_error(char *header, char *msg)
{
	ft_putstr_fd("\033[33m", 2);
	ft_putstr_fd(header, 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(msg, 2);
	ft_putstr_fd("\n", 2);
}

/* Function that will look for the path line inside the environment, will
 split and test each command path and then return the right one. >> env*/
char	*find_path(char *cmd, char **envp)
{
	char	**path_split;
	char	*path;
	int		i;
	char	*part_path;

	i = 0;
	while (ft_strnstr(envp[i++], "PATH", 4) == 0)
	path_split = ft_split(envp[i] + 5, ':');
	i = 0;
	while (path_split[i])
	{
		part_path = ft_strjoin(path_split[i], "/");
		path = ft_strjoin(part_path, cmd);
		free(part_path);
		if (access(path, F_OK) == 0)
			return (path);
		free(path);
		i++;
	}
	i = -1;
	while (path_split[++i])
		free(path_split[i]);
	free(path_split);
	custom_error(cmd, "\033[31mcommand not found");
	return (NULL);
}

/* A error displaying function. */
void	error(void)
{
	perror("\033[31mError");
	exit(EXIT_FAILURE);
}

/* Function that take the command and send it to find_path
 before executing it. */
void	execute(char *argv, char **envp)
{
	char	**cmd;
	int		i;
	char	*path;

	i = -1;
	cmd = ft_split(argv, ' ');
	path = find_path(cmd[0], envp);
	if (!path)
	{
		while (cmd[++i])
			free(cmd[i]);
		free(cmd);
		exit(127);
	}
	if (execve(path, cmd, envp) == -1)
	{
		while (cmd[++i])
			free(cmd[i]);
		free (path);
		error();
	}	
}

/* Function that will read input from the terminal and return line. */
int	get_next_line(char **line)
{
	char	*buffer;
	int		i;
	int		len_read;
	char	caracter;

	i = 0;
	len_read = 0;
	buffer = (char *)malloc(10000);
	if (!buffer)
		return (-1);
	len_read = read(0, &caracter, 1);
	while (len_read && caracter != '\n' && caracter != '\0')
	{
		if (caracter != '\n' && caracter != '\0')
			buffer[i] = caracter;
		i++;
		len_read = read(0, &caracter, 1);
	}
	buffer[i] = '\n';
	buffer[++i] = '\0';
	*line = buffer;
	free(buffer);
	return (len_read);
}
