/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:48:24 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:16 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_putstr_fd
// Prototype        | void ft_putstr_fd(char *s, int fd);
// Turn in files    | -
// Parameters       | s: The string to output.
//					| fd: The file descriptor on which to write.
// Return value     | None
// External functs. | write
// Description      | Outputs the string ’s’ to the given file descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
	{
		while (*s)
		{	
			write(fd, s, 1);
			s++;
		}	
	}
}

/*
Essa é uma função em linguagem C que recebe uma string (s) e
um inteiro (fd) como parâmetros. Ela é chamada "ft_putstr_fd"
e não retorna nenhum valor (void). O objetivo dela é imprimir
a string no arquivo (fd) especificado.

O código verifica se a string não é nula (NULL) e, se não for,
entra em um loop que percorre cada caractere da string (usando
o ponteiro *s) e escreve ele no arquivo (fd) usando a função
"write" da biblioteca "unistd.h". O loop continua até que seja
encontrado um caractere nulo ('\0') que indica o final da string.

Em resumo, essa função escreve uma string em um arquivo específico.
*/

/*
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
*/