/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:58:19 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:20 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// STRCHR(3)                 Library Functions Manual                 STRCHR(3)
//
// NAME
//      strchr, strrchr – locate character in string
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      char *
//      strchr(const char *s, int c);
//
//      char *
//      strrchr(const char *s, int c);
//
// DESCRIPTION
//      The strchr() function locates the first occurrence of c (converted to a
//      char) in the string pointed to by s.  
//		The terminating null character is considered to be part of the string; 
//		therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
//
//      The strrchr() function is identical to strchr(), except it locates the 
//		last occurrence of c.
//
// RETURN VALUES
//      The functions strchr() and strrchr() return a pointer to the located
//      character, or NULL if the character does not appear in the string.
*/

#include "libft.h" // NULL definition

char	*ft_strchr(const char *s, int c)
{
	if ((unsigned char)c == '\0')
	{
		while (*s)
			s++;
		return ((char *) s);
	}
	while (*s)
	{
		if ((unsigned char)c == *s)
			return ((char *) s);
		s++;
	}
	return (NULL);
}

/*
Este código procura a primeira ocorrência de um determinado caractere numa
cadeia de caracteres e retorna um ponteiro para a posição desse caractere
na cadeia.

Na primeira parte da função, é verificado se o caractere a ser procurado é
o caractere nulo ('\0'), que marca o final da cadeia. Nesse caso, a função
percorre a cadeia até chegar ao final e retorna um ponteiro para essa posição.

Na segunda parte da função, a cadeia é percorrida e cada caractere é comparado
com o caractere buscado. Se houver uma correspondência, a função retorna um
ponteiro para essa posição na cadeia.

Se o caractere buscado não for encontrado, a função retorna um ponteiro
nulo (NULL).

A expressão (unsigned char)c é usada neste código em vez de simplesmente c
para garantir que o valor do caractere seja interpretado como um número sem
sinal de 8 bits, independentemente da plataforma ou do compilador em que o
código esteja sendo executado.

Isso é importante porque o tipo char pode ser assinado ou sem sinal,
dependendo do compilador e da plataforma em questão. Ao forçar o tipo do
caractere a ser sem sinal, garantimos que o valor do caractere esteja dentro
do intervalo [0, 255], que é o intervalo válido de valores que podem ser
representados em um byte.

Usar int c em vez de (unsigned char)c também pode funcionar na maioria dos
casos, mas pode causar problemas quando o valor de c é negativo, pois nesse
caso ele seria convertido para um valor de char assinado, o que pode causar
comportamento indefinido no código.
*/
