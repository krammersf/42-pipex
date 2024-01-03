/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:32:02 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 14:55:15 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// ISPRINT(3)                 Library Functions Manual                ISPRINT(3)
//
// NAME
//      isprint – printing character test (space character inclusive)
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <ctype.h>
//
//      int isprint(int c);
//
// DESCRIPTION
//      The isprint() function tests for any printing character, including space
//      (‘ ’).  The value of the argument must be representable as an unsigned
//      char or the value of EOF.
//
// RETURN VALUES
//      The isprint() function returns zero if the character tests false and
//      returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

/*
#include <stdio.h>

int	main(void)
{
	int	test;

	test = ' ' - 1;
	while (test <= '~' + 1)
	{
		printf("ft_isprint(%o | %c) = %d\n", test, test, ft_isprint(test));
		test++;
	}
	return (0);
}
*/

/*
A função "ft_isprint" recebe um caractere (representado
pelo parâmetro "c") e retorna um valor booleano (1 ou 0),
indicando se este caractere é imprimível ou não. Para ser
considerado imprimível, o caractere deve estar no intervalo
de caracteres da tabela ASCII entre o espaço (" ") e o til
("~"). Se o valor de "c" estiver dentro deste intervalo,
a função retorna 1, caso contrário, retorna 0.
*/

/*
int	ft_isprint(int c)
{
	return (31 < c && c < 127);
}
*/
