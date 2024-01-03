/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:34:33 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 15:02:51 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// STRLEN(3)                  Library Functions Manual               STRLEN(3)
//
// NAME
//      strlen, strnlen – find length of string
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      size_t strlen(const char *s);
//
//      size_t strnlen(const char *s, size_t maxlen);
//
// DESCRIPTION
//      The strlen() function computes the length of the string s.  
//      The strnlen() function attempts to compute the length of s, 
//  	but never scans beyond the first maxlen bytes of s.
//
// RETURN VALUES
//      The strlen() function returns the number of characters that precede the
//      terminating NUL character.  The strnlen() function returns either the 
//  	same result as strlen() or maxlen, whichever is smaller.
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
#include <stdio.h>


int	main(void)
{
	const char	s[] = "123";

	printf("ft_strlen(%s) = %d\n", s, ft_strlen(s));
	return (0);
}
*/

/*
Essa função em C se chama "ft_strlen" e ela recebe uma string
(conjunto de caracteres) como parâmetro. Ela retorna o tamanho
dessa string em bytes, ou seja, quantos caracteres ela tem. 

Para isso, a função utiliza um loop "while" para percorrer
cada caracter da string, incrementando uma variável "i" a cada
iteração, até que o loop chegue ao final da string (onde o
último caracter é representado pelo valor nulo "\0"). 

Por fim, a função retorna o valor da variável "i", que
representa o tamanho da string.
*/
