/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:15:39 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:14 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_putendl_fd
// Prototype        | void ft_putendl_fd(char *s, int fd);
// Turn in files    | -
// Parameters       | s: The string to output.
//					| fd: The file descriptor on which to write.
// Return value     | None
// External functs. | write
// Description      | Outputs the string ’s’ to the given file descriptor 
//					| followed by a newline.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*
A função void ft_putendl_fd(char *s, int fd) imprime uma string (s)
em um arquivo de descritor de arquivo (fd) e adiciona uma nova
linha no final. Para fazer isso, a função chama a função
ft_putstr_fd(s, fd) para imprimir a string e, em seguida, chama a
função write(fd, "\n", 1) para adicionar a nova linha.
*/
