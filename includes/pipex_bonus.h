/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:53:37 by fde-carv          #+#    #+#             */
/*   Updated: 2023/06/20 12:26:52 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "../libft/libft.h"

// ***** --- Mandatory functions --- ***** //

// --- pipex.c --- //
//void	child_process(char **av, char **envp, int *fd);
//void	parent_process(char **av, char **envp, int *fd);
//int		main(int ac, char **av, char **envp);

// --- utils.c --- //
void	custom_error(char *header, char *msg);
char	*find_path(char *cmd, char **envp);
void	error(void);
void	execute(char *av, char **envp);
int		get_next_line(char **line);

// ***** --- Bonus functions --- ***** //

// --- pipex_bonus.c --- //
void	here_doc(char *limiter, int ac);
void	child_process_here_doc(char *limiter);
int		main(int ac, char **av, char **envp);

// --- utils_bonus.c --- //
void	message2(void);
int		open_file(char *av, int i);

#endif
