/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:36:06 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:12 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// MEMMOVE(3)                Library Functions Manual                MEMMOVE(3)
//
// NAME
//      memmove – copy byte string
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      void *
//      memmove(void *dst, const void *src, size_t len);
//
// DESCRIPTION
//      The memmove() function copies len bytes from string src to string dst.
//		The two strings may overlap; the copy is always done in a 
//		non-destructive manner.
//
// RETURN VALUES
//      The memmove() function returns the original value of dst.
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

// To be noted that MEMCPY(3) mentions the following:
// Applications in which dst and src might overlap should
// use memmove(3) instead.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n--)
		d[n] = s[n];
	return (dest);
}

/*
Operação de cópia de "n" bytes de dados da origem "src" para o
destino "dest". O funcionamento da função é o seguinte:
- Primeiro, a função verifica se "dest" e "src" são nulos.
  Se ambos forem nulos, a função simplesmente retorna "dest"
  sem fazer nenhuma operação adicional.
- Em seguida, a função verifica se "dest" está depois de "src"
  na memória. Se for esse o caso, a função chama a função
  "ft_memcpy" para copiar os dados de "src" para "dest" em
  ordem crescente (da esquerda para a direita).
- Se não for nenhum desses casos, a função começa a copiar os
  dados de "src" para "dest" em ordem decrescente (da direita
  para a esquerda), byte a byte, até que todos os "n" bytes
  sejam copiados.
- Por fim, a função retorna "dest" depois de concluir a cópia.

É importante notar que a cópia ocorre de trás para frente,
porque se as duas áreas de memória se sobrepõem, copiar da
frente para trás pode apagar dados que ainda não foram copiados.
Portanto, mover de trás para frente garante que nenhum byte
seja perdido.
*/
