/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:37:47 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 14:53:53 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

// ISDIGIT(3)                 Library Functions Manual                ISDIGIT(3)
//
// NAME
//      isdigit, isnumber – decimal-digit character test
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <ctype.h>
//
//      int isdigit(int c);
//      int isnumber(int c);
//
// DESCRIPTION
//      The isdigit() function tests for a decimal digit character.  
//	    Regardless of locale, this includes the following characters only:
//
//      ``0''         ``1''         ``2''         ``3''         ``4''
//      ``5''         ``6''         ``7''         ``8''         ``9''
//
//      The isnumber() function behaves similarly to isdigit(), but may 
//		recognize additional characters, depending on the current locale
//		setting.
//
//      The value of the argument must be representable as an unsigned char or 
//		the value of EOF.
//
// RETURN VALUES
//      The isdigit() and isnumber() functions return zero if the character 
//		tests false and return non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>

int	main(void)
{
	int	test;

	test = '0' - 1;
	while (test <= '9' + 1)
	{
		printf("ft_isdigit(%c) = %d\n", test, ft_isdigit(test));
		test++;
	}
	return (0);
}
*/

/*
A função "ft_isdigit" retorna um valor inteiro e recebe um
parâmetro "c". Ela verifica se o valor de "c" está entre os
caracteres numéricos (0 a 9) na tabela ASCII. Se estiver, a
função retorna 1 (verdadeiro), caso contrário, retorna 0 (falso).
*/
