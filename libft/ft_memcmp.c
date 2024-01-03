/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:27:48 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:07 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// MEMCMP(3)                Library Functions Manual                MEMCMP(3)
//
// NAME
//      memcmp – compare byte string
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      int
//      memcmp(const void *s1, const void *s2, size_t n);
//
// DESCRIPTION
//      The memcmp() function compares byte string s1 against byte string s2.  
//		Both strings are assumed to be n bytes long.
//
// RETURN VALUES
//      The memcmp() function returns zero if the two strings are identical, 
//		otherwise returns the difference between the first two differing bytes 
//		(treated as unsigned char values, so that ‘\200’ is greater than ‘\0’,
//		for example).
//		Zero-length strings are always identical.  
//		This behavior is not required by C and portable code should only depend
//		on the sign of the returned value.
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*
A função ft_memcmp compara os primeiros n bytes de duas áreas de
memória apontadas por s1 e s2. Ela retorna um valor inteiro que
indica a relação entre os dois blocos de memória:

- Se os dois blocos são iguais, a função retorna 0.
- Se o primeiro byte que é diferente em s1 é menor do que o
  correspondente em s2, a função retorna um número negativo.
- Se o primeiro byte que é diferente em s1 é maior do que o
  correspondente em s2, a função retorna um número positivo.

A variável i é usada para percorrer os bytes das áreas de memória,
comparando-os um a um. A função é implementada usando ponteiros
para unsigned char para garantir que os bytes sejam interpretados
como números sem sinal.
*/
