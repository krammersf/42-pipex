/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:30:06 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 15:01:47 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
/ STRLCPY(3)              BSD Library Functions Manual              STRLCPY(3)
//
// NAME
//      strlcpy, strlcat -- size-bounded string copying and concatenation
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      size_t
//      strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
//
//      size_t
//      strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
//
// DESCRIPTION
//      The strlcpy() and strlcat() functions copy and concatenate strings with 
//		the same input parameters and output result as snprintf(3).  
//		They are designed to be safer, more consistent, and less error prone 
//		replacements for the easily misused functions strncpy(3) and strncat(3).
//
//      strlcpy() and strlcat() take the full size of the destination buffer and
//		guarantee NUL-termination if there is room. 
//		Note that room for the NUL should be included in dstsize.
//
//      strlcpy() copies up to dstsize - 1 characters from the string 
//		src to dst, NUL-terminating the result if dstsize is not 0.
//
//      strlcat() appends string src to the end of dst.  It will append at most 
//		dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, 
//		unless dstsize is 0 or the original dst string was longer than dstsize 
//		(in practice this should not happen as it means that either dstsize is 
//		incorrect or that dst is not a proper string).
//
//      If the src and dst strings overlap, the behavior is undefined.
//
// RETURN VALUES
//      Besides quibbles over the return type (size_t versus int) and signal 
//		handler safety (snprintf(3) is not entirely safe on some systems), 
//		the following two are equivalent:
//
//            n = strlcpy(dst, src, len);
//            n = snprintf(dst, len, "%s", src);
//
//      Like snprintf(3), the strlcpy() and strlcat() functions return the 
//		total length of the string they tried to create.  
//		For strlcpy() that means the length of src.  
//		For strlcat() that means the initial length of dst plus the length 
//		of src.
//
//      If the return value is >= dstsize, the output string has been 
//		truncated.  It is the caller's responsibility to handle this.
//
// EXAMPLES
//      The following code fragment illustrates the simple case:
//
//            char *s, *p, buf[BUFSIZ];
//
//            ...
//
//            (void)strlcpy(buf, s, sizeof(buf));
//            (void)strlcat(buf, p, sizeof(buf));
//
//      To detect truncation, perhaps while building a pathname, something 
//		like the following might be used:
//
//            char *dir, *file, pname[MAXPATHLEN];
//
//            ...
//
//            if (strlcpy(pname, dir, sizeof(pname)) >= sizeof(pname))
//                    goto toolong;
//            if (strlcat(pname, file, sizeof(pname)) >= sizeof(pname))
//                    goto toolong;
//
//      Since it is known how many characters were copied the first time, 
//		things can be sped up a bit by using a copy instead of an append:
//
//            char *dir, *file, pname[MAXPATHLEN];
//            size_t n;
//
//            ...
//
//            n = strlcpy(pname, dir, sizeof(pname));
//            if (n >= sizeof(pname))
//                    goto toolong;
//            if (strlcpy(pname + n, file, sizeof(pname) - n)
//												>= sizeof(pname) - n)
//                    goto toolong;
//
//      However, one may question the validity of such optimizations, as they 
//		defeat the whole purpose of strlcpy() and strlcat().  
//		As a matter of fact, the first version of this manual page got it wrong.
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

// "Some of the functions’ prototypes you have to redo use the
// ’restrict’ qualifier."

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}

/*
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	src[] = "xxxxxx";
	char	dst1[] = "ABCDEFGHIJ";
	char	dst2[] = "ABCDEFGHIJ";

	if (argc == 1)
	{
		puts("Executing sample tests, as no argument was given");
		puts("");
		printf("src  = %s\n", src);
		printf("dst1 = %s\n", dst1);
		printf("Original  strlcpy(%s, %s, %lu), returns=%lu\n", 
			dst1, src, strlen(dst1),    strlcpy(dst1, src, strlen(dst1)));
		printf("src  = %s\n", src);
		printf("dst1 = %s\n", dst1);
		puts("");
		printf("src  = %s\n", src);
		printf("dst2 = %s\n", dst1);
		printf("Custom ft_strlcpy(%s, %s, %lu), returns=%zu\n ",
			dst2, src, strlen(dst2), ft_strlcpy(dst2, src, strlen(dst2)));
		printf("src  = %s\n", src);
		printf("dst2 = %s\n", dst1);
	}
	else
	{
		puts(argv[1]);
	}
	return (0);
}
*/

/*
Esta função recebe como entrada uma string de destino e uma
string de origem, além de um tamanho máximo para a string
de destino. Ela copia a string de origem para a string de destino,
mas garante que a string de destino tenha no máximo o tamanho
especificado. Além disso, a função retorna o tamanho da string
de origem.

O tipo de dado size_t é um tipo de dado inteiro sem sinal que
é usado para representar tamanhos de objetos em bytes. É usado
principalmente para funções de alocação de memória. A função
ft_strlcpy retorna um size_t. 

A primeira linha da função declara uma variável i do tipo
size_t e inicializa seu valor como zero. 

A próxima linha verifica se o tamanho da string de destino
é diferente de zero. Se for, a função executa um loop enquanto
a string de origem não acabar e enquanto o contador i for menor
do que o tamanho da string de destino menos um. 

A cada iteração do loop, a função copia um caractere da string
de origem para a string de destino e incrementa o contador i. 

Depois de sair do loop, a função adiciona o caractere nulo ao
final da string de destino para sinalizar o fim da string. 

Por fim, a função retorna o tamanho da string de origem usando
a função ft_strlen.
*/
