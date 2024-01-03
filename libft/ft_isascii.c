/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:36:23 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 14:48:48 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// ISASCII(3)                 Library Functions Manual                ISASCII(3)
//
// NAME
//      isascii – test for ASCII character
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// // SYNOPSIS
//		#include <ctype.h>
//
//		int isascii(int c);
//
// DESCRIPTION
//      The isascii() function tests for an ASCII character, which is any
//      character between 0 and octal 0177 inclusive.
//
//
//	"an integer digit preceded by 0 is interpreted as an octal number"
// 	https://www.geeksforgeeks.org/octal-numbers-c/
//
//		   0 = NULL
//		0177 = DELete
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 0177);
}

/*
#include <stdio.h>

int	main(void)
{
	int	test;

	test = '\0' - 1;
	while (test <= 0177 + 1)
	{
		printf("ft_isascii(%o | %c) = %d\n", test, test, ft_isascii(test));
		test++;
	}
	return (0);
}
*/

/*
Essa função verifica se o valor do caractere 'c' está dentro da tabela
ASCII (que vai de 0 até 127 em decimal, ou de 00000000 até 01111111
em binário). Se sim, retorna 1, indicando que é um caractere ASCII.
Se não, retorna 0, indicando que não é um caractere ASCII.
*/
