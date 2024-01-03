/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 09:36:47 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 15:04:14 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// STRCMP(3)               BSD Library Functions Manual               STRCMP(3)
//
// NAME
//      strcmp, strncmp -- compare strings
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      int strcmp(const char *s1, const char *s2);
//
//      int strncmp(const char *s1, const char *s2, size_t n);
//
// DESCRIPTION
//      The strcmp() and strncmp() functions lexicographically compare the 
//		null-terminated strings s1 and s2.
//
//      The strncmp() function compares not more than n characters.  
//		Because strncmp() is designed for comparing strings rather than binary 
//		data, characters that appear after a `\0' character are not compared.
//
// RETURN VALUES
//      The strcmp() and strncmp() functions return an integer greater than, 
//		equal to, or less than 0, according as the string s1 is greater than, 
//		equal to, or less than the string s2.  The comparison is done using 
//		unsigned characters, so that `\200' is greater than `\0'.
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char			*s1;
	char			*s2;
	unsigned int	n;

	if (argc == 4)
	{
		s1 = argv[1];
		s2 = argv[2];
		n = atoi(argv[3]);
	}
	else
	{
		s1 = "ABCxyz";
		s2 = "ABC123";
		n = 4;
		puts("No parameters s1,  s2 and n provided. Using samples");
	}
	printf("  _strncmp(%s, %s, %d) = %d\n", s1, s2, n, strncmp(s1, s2, n));
	printf("ft_strncmp(%s, %s, %d) = %d\n", s1, s2, n, ft_strncmp(s1, s2, n));
	return (0);
}
*/

/*
Esta função compara os primeiros "n" caracteres das strings "s1" e "s2".
Ela percorre os caracteres das duas strings usando um loop "while" e verifica
se o caractere atual de cada string é igual ou diferente. Se os caracteres
forem iguais, ela avança para o próximo caractere. Se os caracteres forem
diferentes, ela retorna a diferença entre eles, convertendo os caracteres para
unsigned char. Se as strings forem iguais até o final ou se o número máximo de
caracteres "n" for alcançado, a função retorna 0.
*/
