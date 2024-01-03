/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:33:08 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 14:57:18 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// MEMCPY(3)               BSD Library Functions Manual               MEMCPY(3)
//
// NAME
//      memcpy -- copy memory area
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      void *memcpy(void *restrict dst, const void *restrict src, size_t n);
//
// DESCRIPTION
//      The memcpy() function copies n bytes from memory area src to memory 
//		area dst.  
//		If dst and src overlap, behavior is undefined.
//      Applications in which dst and src might overlap should use memmove(3)
//		instead.
//
// RETURN VALUES
//      The memcpy() function returns the original value of dst.
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

// "Some of the functions’ prototypes you have to redo use the
// ’restrict’ qualifier."

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	src[] = "SourceEEEEEEEE";
	char	dst1[] = "ABCDEFGHIJ";
	char	dst2[] = "ABCDEFGHIJ";
	int		len = 10;

	if (argc == 1)
	{
		puts("Executing sample tests, as no argument was given");
		puts("");
		printf("dst1 = %s\n", dst1);
		printf("   memcpy(%s, %s)\n", dst1, src);
		memcpy(dst1, src, len);
		printf("dst1 = %s\n", dst1);
		//
		puts("");
		printf("dst2 = %s\n", dst2);
		printf("ft_memcpy(%s, %s)\n", dst2, src);
		ft_memcpy(dst2, src, len);
		printf("dst2 = %s\n", dst2);
	}
	else
	{
		puts(argv[1]);
		//printf("%s\n", ft_strcapitalize(argv[1]));
	}
	return (0);
}
*/

/*
Esta é uma função em linguagem C chamada "ft_memcpy". Ela recebe
três argumentos: "dst", "src" e "n". "dst" é um ponteiro para o
local de destino onde os dados serão copiados. "src" é um ponteiro
para o local de origem onde os dados serão copiados. "n" é o número
de bytes que devem ser copiados.

A função começa inicializando uma variável chamada "i" com o valor
zero. Em seguida, ela verifica se os ponteiros "dst" e "src" são
nulos. Se ambos forem nulos, a função retorna nulo.

A seguir, a função entra em um loop while que executa enquanto "i"
for menor que "n". Dentro do loop, a função copia um byte de "src"
para "dst". Isso é feito convertendo os ponteiros em ponteiros para
"unsigned char", o que permite que a cópia seja feita byte a byte.
Depois de copiar um byte, a função incrementa o valor de "i".

Por fim, a função retorna o ponteiro "dst", que agora contém uma
cópia dos dados que estavam em "src".
*/
