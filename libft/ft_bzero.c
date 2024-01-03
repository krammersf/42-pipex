/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:31:59 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 14:53:47 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// BZERO(3)                BSD Library Functions Manual                BZERO(3)
//
// NAME
//      bzero -- write zeroes to a byte string
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <strings.h>
//
//      void
//      bzero(void *s, size_t n);
//
// DESCRIPTION
//      The bzero() function writes n zeroed bytes to the string s.  
//		If n is zero, bzero() does nothing.
*/

#include "libft.h" // size_t is defined in header <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
#include <string.h>
#include <stdio.h>
#include <strings.h>

int	main(int argc, char **argv)
{
	char	dst1[] = "ABCDEFGHIJ";
	char	dst2[] = "ABCDEFGHIJ";
	int		len = 3;

	if (argc == 1)
	{
		puts("Executing sample tests, as no argument was given");
		puts("");
		printf("dst1 = %s\n", dst1);
		bzero(dst1, len);
		printf("dst1 = %s\n", dst1);
		puts("");
		printf("dst2 = %s\n", dst2);
		ft_bzero(dst2, len);
		printf("dst2 = %s\n", dst2);
	}
	else
	{
		puts(argv[1]);
		//printf("%s\n", ft_strcapitalize(argv[1]));
	}
	return (0);
}
*/

/*
A função "void ft_bzero (void *s, size_t n)" serve para preencher com
zeros (ou "null") uma área de memória do tamanho especificado por "n".
A expressão "void" indica que a função não retorna nada. "s" é um ponteiro
para o início da área de memória a ser preenchida e "n" é o número de bytes
a serem preenchidos. A função utiliza a função "ft_memset" para fazer a 
operação de preenchimento.
*/