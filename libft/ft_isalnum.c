/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:13:33 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 14:45:19 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// ISALNUM(3)                 Library Functions Manual                ISALNUM(3)
//
// NAME
//      isalnum – alphanumeric character test
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <ctype.h>
//
//      int isalnum(int c);
//
// DESCRIPTION
//      The isalnum() function tests for any character for which isalpha(3) or
//      isdigit(3) is true.  The value of the argument must be representable as 
//		an unsigned char or the value of EOF.
//
//      In the ASCII character set, this includes the following characters
//      (preceded by their numeric values, in octal):
//
//      060 ``0'' 061 ``1'' 062 ``2'' 063 ``3'' 064 ``4''
//      065 ``5'' 066 ``6'' 067 ``7'' 070 ``8'' 071 ``9''
//      101 ``A'' 102 ``B'' 103 ``C'' 104 ``D'' 105 ``E''
//      106 ``F'' 107 ``G'' 110 ``H'' 111 ``I'' 112 ``J''
//      113 ``K'' 114 ``L'' 115 ``M'' 116 ``N'' 117 ``O''
//      120 ``P'' 121 ``Q'' 122 ``R'' 123 ``S'' 124 ``T''
//      125 ``U'' 126 ``V'' 127 ``W'' 130 ``X'' 131 ``Y''
//      132 ``Z'' 141 ``a'' 142 ``b'' 143 ``c'' 144 ``d''
//      145 ``e'' 146 ``f'' 147 ``g'' 150 ``h'' 151 ``i''
//      152 ``j'' 153 ``k'' 154 ``l'' 155 ``m'' 156 ``n''
//      157 ``o'' 160 ``p'' 161 ``q'' 162 ``r'' 163 ``s''
//      164 ``t'' 165 ``u'' 166 ``v'' 167 ``w'' 170 ``x''
//      171 ``y'' 172 ``z''
//
// RETURN VALUES
//      The isalnum() function returns zero if the character tests false and
//      returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*
#include <stdio.h>

int	main(void)
{
	int	test;

	test = '0' - 1;
	while (test <= 'z' + 1)
	{
		printf("ft_isalnum(%c) = %d\n", test, ft_isalnum(test));
		test++;
	}
	return (0);
}
*/

/*
A função recebe um caractere como argumento e retorna um valor inteiro
indicando se o caractere é alfanumérico ou não.

A função usa uma expressão condicional para verificar se o caractere
é alfanumérico. A expressão condicional é composta por três partes
separadas por operadores lógicos || (ou). Cada parte da expressão
verifica se o caractere pertence a um intervalo específico de caracteres.

A primeira parte da expressão verifica se o caractere é um dígito
numérico entre '0' e '9'. A segunda parte verifica se o caractere é
uma letra maiúscula entre 'A' e 'Z'. A terceira parte verifica se o
caractere é uma letra minúscula entre 'a' e 'z'.

Se o caractere atender a pelo menos uma das três condições acima,
a expressão condicional retorna 1, indicando que o caractere é
alfanumérico. Caso contrário, a expressão condicional retorna 0,
indicando que o caractere não é alfanumérico.

Em resumo, a função ft_isalnum verifica se um caractere é
alfanumérico ou não, e retorna 1 se for alfanumérico e 0 se não for.
*/

/*
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
*/