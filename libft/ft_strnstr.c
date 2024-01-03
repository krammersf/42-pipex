/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 09:40:29 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:18:34 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// STRSTR(3)                Library Functions Manual                STRSTR(3)
//
// NAME
//      strnstr – locate a substring in a string
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      char *
//      strnstr(const char *haystack, const char *needle, size_t len);

// DESCRIPTION
//      The strnstr() function locates the first occurrence of the 
//		null-terminated string needle in the string haystack, where not more 
//		than len characters are searched.
//      Characters that appear after a ‘\0’ character are not searched.  
//		Since the strnstr() function is a FreeBSD specific API, it should only 
//		be used when portability is not a concern.
//
// RETURN VALUES
//      If needle is an empty string, haystack is returned; if needle occurs 
//		nowhere in haystack, NULL is returned; otherwise a pointer to the first
//		character of the first occurrence of needle is returned.
//
// EXAMPLES
//      The following sets the pointer ptr to NULL, because only the first 
//		4 characters of largestring are searched:
//
//            const char *largestring = "Foo Bar Baz";
//            const char *smallstring = "Bar";
//            char *ptr;
//
//            ptr = strnstr(largestring, smallstring, 4);
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			if (haystack[i + j] == '\0' && needle[j] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*
A função ft_strnstr procura a primeira ocorrência da string needle em haystack,
mas no máximo em um comprimento de len caracteres. A função retorna um ponteiro
para a primeira ocorrência de needle em haystack, ou NULL se needle não for
encontrada.

A função começa verificando se needle é uma string vazia. Nesse caso, a
função simplesmente retorna um ponteiro para o início de haystack.

A seguir, a função itera através de haystack. Dentro do loop while externo,
a função inicializa uma variável j para 0 e começa a verificar se os caracteres
de needle correspondem aos caracteres de haystack a partir da posição i + j.
Se esses caracteres correspondem e a soma de i e j é menor que len,
a função incrementa j e continua verificando o próximo caractere.
Se os caracteres de haystack e needle correspondem e j atinge o final de needle,
a função retorna um ponteiro para a posição atual de i em haystack.

Se os caracteres não correspondem, a função incrementa i e começa a buscar a
partir da próxima posição em haystack. Se o final de haystack é alcançado e a
função não encontrou uma correspondência para needle, a função retorna NULL.
*/
