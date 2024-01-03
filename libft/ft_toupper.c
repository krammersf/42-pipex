/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:16:42 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 15:08:16 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// TOUPPER(3)                Library Functions Manual               TOUPPER(3)
//
// NAME
//      toupper, toupper_l – lower case to upper case letter conversion
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <ctype.h>
//
//      int toupper(int c);
//
//      #include <ctype.h>
//      #include <xlocale.h>
//
//      int toupper_l(int c, locale_t loc);
//
// DESCRIPTION
//      The toupper() function converts a lower-case letter to the 
//		corresponding uppercase letter.  The argument must be 
//		representable as an unsigned char or the value of EOF.
//
//      Although the toupper() function uses the current locale, the 
//		toupper_l() function may be passed a locale directly. 
//		See xlocale(3) for more information.
//
// RETURN VALUES
//      If the argument is a lower-case letter, the toupper() function 
//		returns the corresponding upper-case letter if there is one; 
//		otherwise, the argument is returned unchanged.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('z' - 'Z'));
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	int	test;

	test = 'a' - 1;
	while (test <= 'z' + 1)
	{
		printf("ft_toupper(%o | %c) = %c\n", test, test, ft_toupper(test));
		test++;
	}
	return (0);
}
*/

/*
A função "ft_toupper" recebe um caractere como entrada e retorna o mesmo
caractere, mas em maiúsculo, caso ele seja uma letra minúscula. Caso contrário,
retorna o mesmo caractere sem modificação. Para verificar se o caractere é uma
letra minúscula, a função verifica se o código ASCII do caractere está entre
os códigos ASCII das letras "a" e "z". Se estiver, subtrai a diferença entre
os códigos ASCII das letras "z" e "Z" do código ASCII do caractere, o que resulta
no código ASCII da letra maiúscula correspondente.
*/
