/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:11:31 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 15:06:51 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// TOLOWER(3)                 Library Functions Manual                TOLOWER(3)
//
// NAME
//      tolower, tolower_l – upper case to lower case letter conversion
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <ctype.h>
//
//      int tolower(int c);
//
//      #include <ctype.h>
//      #include <xlocale.h>
//
//      int tolower_l(int c, locale_t loc);
//
// DESCRIPTION
//      The tolower() function converts an upper-case letter to the 
//		corresponding lower-case letter.  The argument must be representable as 
//		an unsigned char or the value of EOF.
//
//      Although the tolower() function uses the current locale, the tolower_l()
//		function may be passed a locale directly. See xlocale(3) for more 
//		information.
//
// RETURN VALUES
//      If the argument is an upper-case letter, the tolower() function returns 
//		the corresponding lower-case letter if there is one; otherwise, 
//		the argument is returned unchanged.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('z' - 'Z'));
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	int	test;

	test = 'A' - 1;
	while (test <= 'Z' + 1)
	{
		printf("ft_tolower(%o | %c) = %c\n", test, test, ft_tolower(test));
		test++;
	}
	return (0);
}
*/

/*
Esta é uma função em linguagem C chamada "ft_tolower". O objetivo
dela é transformar uma letra maiúscula em letra minúscula.

A função recebe como parâmetro um caractere "c". Caso o valor
do caractere "c" esteja entre "A" e "Z", ou seja, seja uma letra
maiúscula, a função adiciona a diferença entre "z" e "Z" ao valor
de "c", fazendo com que ele se torne uma letra minúscula correspondente.
Caso contrário, retorna o próprio valor de "c".

Por exemplo, se o valor de "c" for 'B', que é a letra maiúscula
"B", a função irá retornar o valor correspondente da letra minúscula
"b", que é 98 em ASCII. Se o valor de "c" for '1', que não é uma letra,
a função irá retornar o próprio valor de "c", que é 49 em ASCII.
*/
