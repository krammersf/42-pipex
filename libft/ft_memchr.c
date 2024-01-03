/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:33:56 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 17:57:29 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// MEMCHR(3)                 Library Functions Manual                 MEMCHR(3)
//
// NAME
//      memchr – locate byte in byte string
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      void *
//      memchr(const void *s, int c, size_t n);
//
// DESCRIPTION
//      The memchr() function locates the first occurrence of c (converted to an
//      unsigned char) in string s.
//
// RETURN VALUES
//      The memchr() function returns a pointer to the byte located, or NULL if
//		no such byte exists within n bytes.
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*
ft_memchr, procura por um caractere numa área de memória (s)
de tamanho n.

A função recebe três argumentos:

s, que é um ponteiro para a área de memória a ser procurada;
c, que é o caractere a ser procurado;
n, que é o tamanho da área de memória a ser procurada.
A função retorna um ponteiro para o primeiro byte em s que contém c,
ou NULL se c não for encontrado em s.

O código começa criando uma variável i e atribuindo o valor 0 a ela.
Em seguida, entra em um loop while que irá executar enquanto i 
for menor que n. Dentro do loop, o código checa se o caractere em
s[i] é igual a c. Se for, a função retorna um ponteiro para s+i, ou
seja, o endereço da posição onde c foi encontrado na área de memória.
Se o caractere não for encontrado na posição atual, o código incrementa
i e repete o processo até que i seja igual a n.

Se a função chegar ao final do loop sem encontrar c, ela retorna NULL.

A conversão do ponteiro para void * é necessária porque a função
ft_memchr é declarada como retornando um ponteiro genérico void *.
Isso permite que a função seja usada para procurar por qualquer tipo de
dado em uma área de memória, não apenas caracteres.

Note que a conversão para void * é segura neste caso porque o ponteiro
retornado pela função aponta para uma posição válida na área de memória s,
que foi declarada como um ponteiro para const void. No entanto, se a área
de memória fosse modificável (ou seja, se s fosse um ponteiro para void
em vez de const void), o ponteiro retornado deveria ser convertido para
o tipo apropriado antes de ser usado para acessar ou modificar dados.
*/
