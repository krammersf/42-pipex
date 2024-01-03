/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:06:38 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:16:49 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// MALLOC(3)                 Library Functions Manual                MALLOC(3)
//
// NAME
//      calloc – memory allocation
//
// SYNOPSIS
//      #include <stdlib.h>
//
//      void *
//      calloc(size_t count, size_t size);
//
//      void
//      free(void *ptr);
//
// DESCRIPTION
//      The malloc() function allocates memory.  
//		The allocated memory is aligned such that it can be 
//		used for any data type, including AltiVec- and SSE-related types.  
//		The free() function frees allocations that were created 
//		via the preceding allocation functions.
//
//      The calloc() function contiguously allocates enough space for count 
//		objects that are size bytes of memory each and returns a pointer to 
//		the allocated memory.  
//		The allocated memory is filled with bytes of value zero.
//
//      The free() function deallocates the memory allocation pointed to 
//		by ptr. 
//		If ptr is a NULL pointer, no operation is performed.
//
// RETURN VALUES
//      If successful, calloc() function returns a pointer to allocated memory.
//		If there is an error, they return a NULL pointer and set errno to 
//		ENOMEM.
//
//      The free() function does not return a value.
//
// DEBUGGING ALLOCATION ERRORS
//      A number of facilities are provided to aid in debugging allocation 
//		errors in applications.  
//		These facilities are primarily controlled via environment variables.
//      The recognized environment variables and their meanings are documented
//		 below.
//
// ENVIRONMENT
//      The following environment variables change the behavior of the 
//		allocation-related functions.
//
//		(...)
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*tab;

	total_size = size * count;
	tab = malloc(total_size);
	if (!tab)
	{
		return (NULL);
	}
	ft_memset(tab, 0, total_size);
	return (tab);
}

/*
A função calloc é usada para alocar memória e inicializá-la com zeros.

A função calloc tem dois argumentos: count e size. O argumento count
representa o número de elementos que serão alocados na memória e o
argumento size representa o tamanho de cada elemento.

A primeira linha da função calcula o tamanho total da memória que será
alocada, multiplicando o tamanho de cada elemento pelo número de elementos.
Isso é armazenado na variável total_size.

Em seguida, a função aloca a memória usando a função malloc, que retorna
um ponteiro para o início da memória alocada. Se a alocação de memória falhar,
a função define a variável errno como ENOMEM e retorna NULL para indicar que
a alocação falhou.

Se a alocação de memória for bem-sucedida, a função memset é usada para
inicializar a memória alocada com zeros. Isso garante que toda a memória
alocada esteja inicializada, mesmo que ela contenha lixo de memória.

Por fim, a função retorna o ponteiro para o início da memória alocada.
Este ponteiro pode ser usado para acessar e manipular os dados armazenados
na memória alocada.
*/

/*
errno é uma variável global definida em linguagem C que armazena o código
do último erro ocorrido durante a execução de uma função. O código de erro é
definido por um número inteiro e é usado para identificar o tipo de erro que
ocorreu.

ENOMEM é um código de erro definido na biblioteca padrão de C que indica que
não há memória disponível para alocar. Quando a função malloc ou calloc não
consegue alocar a quantidade de memória requisitada, ela pode definir a variável
errno para ENOMEM para indicar que ocorreu um erro de falta de memória.

Portanto, a linha de código errno = ENOMEM; está definindo o valor de errno
como ENOMEM, indicando que a alocação de memória falhou por falta de memória
disponível no sistema. Isso é útil para que a função que chamou malloc ou calloc
possa verificar o valor de errno e tomar as ações apropriadas para lidar com
o erro.
*/
