/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:25:47 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 14:47:05 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// ISALPHA(3)                 Library Functions Manual                ISALPHA(3)
//
// NAME
//      isalpha – alphabetic character test
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <ctype.h>
//
//      int isalpha(int c);
//
// DESCRIPTION
//      The isalpha() function tests for any character for which isupper(3) or 
//		islower(3) is true.  The value of the argument must be representable 
//		as an unsigned char or the value of EOF.
//
//      In the ASCII character set, this includes the following characters 
//		(preceded by their numeric values, in octal):
//
//      101 ``A''     102 ``B''     103 ``C''     104 ``D''     105 ``E''
//      106 ``F''     107 ``G''     110 ``H''     111 ``I''     112 ``J''
//      113 ``K''     114 ``L''     115 ``M''     116 ``N''     117 ``O''
//      120 ``P''     121 ``Q''     122 ``R''     123 ``S''     124 ``T''
//      125 ``U''     126 ``V''     127 ``W''     130 ``X''     131 ``Y''
//      132 ``Z''     141 ``a''     142 ``b''     143 ``c''     144 ``d''
//      145 ``e''     146 ``f''     147 ``g''     150 ``h''     151 ``i''
//      152 ``j''     153 ``k''     154 ``l''     155 ``m''     156 ``n''
//      157 ``o''     160 ``p''     161 ``q''     162 ``r''     163 ``s''
//      164 ``t''     165 ``u''     166 ``v''     167 ``w''     170 ``x''
//      171 ``y''     172 ``z''
//
// RETURN VALUES
//      The isalpha() function returns zero if the character tests false and 
//		returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
#include <stdio.h>

int	main(void)
{
	int	test;

	test = 'A' - 1;
	while (test <= 'z' + 1)
	{
		printf("ft_isalpha(%c) = %d\n", test, ft_isalpha(test));
		test++;
	}
	return (0);
}
*/

/*
Esta é uma função em linguagem C chamada "ft_isalpha". Ela recebe um caractere
como argumento e retorna um valor inteiro. A função verifica se o caractere
é uma letra do alfabeto (maiúscula ou minúscula) e retorna 1 se for, ou 0
se não for. 

A verificação é feita através de duas condições: a primeira compara se o
caractere está dentro do intervalo de letras minúsculas na tabela ASCII
(entre 'a' e 'z'), e a segunda compara se o caractere está dentro do intervalo
de letras maiúsculas na tabela ASCII (entre 'A' e 'Z'). Se o caractere estiver
em qualquer um desses intervalos, a condição será verdadeira e a função
retornará 1. Caso contrário, a função retornará 0.
*/

/*
static int	ft_isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}

static int	ft_islower(int c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
*/

/*
A principal diferença entre int e static int é que a variável static int mantém
seu valor entre chamadas sucessivas à função ou bloco, enquanto a variável int é
criada e destruída toda vez que a função ou bloco é executado.
*/
