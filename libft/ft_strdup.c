/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:02:18 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:20 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// STRDUP(3)                Library Functions Manual                STRDUP(3)
//
// NAME
//      strdup, strndup – save a copy of a string
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      char *
//      strdup(const char *s1);
//
//      char *
//      strndup(const char *s1, size_t n);
//
// DESCRIPTION
//      The strdup() function allocates sufficient memory for a copy of the 
//		string s1, does the copy, and returns a pointer to it.  
//		The pointer may subsequently be used as an argument to the function 
//		free(3).
//
//      If insufficient memory is available, NULL is returned and errno is set
//		to ENOMEM.
//
//      The strndup() function copies at most n characters from the string s1 
//		always NUL terminating the copied string.
*/

#include "libft.h" // errno & NULL definitions

char	*ft_strdup(const char *s1)
{
	char	*tab;

	tab = (char *)malloc(ft_strlen(s1) + 1);
	if (!tab)
		return (NULL);
	ft_memcpy(tab, s1, ft_strlen(s1) + 1);
	return (tab);
}

/*
int	main(void)
{
	char *str = ft_strdup("Hello World!");
	printf("%s\n", str);
	free(str);
	return (0);
}
*/

/*
Este código aloca dinamicamente memória para uma nova cadeia de caracteres
e copia o conteúdo de uma cadeia de caracteres existente para a nova
cadeia de caracteres.

Na primeira linha, a função aloca dinamicamente memória para uma nova
cadeia de caracteres com o tamanho da cadeia de caracteres s1 mais um
byte adicional para o caractere nulo no final da cadeia de caracteres.
O tipo de retorno da função é um ponteiro para um caractere.

Em seguida, é verificado se a alocação de memória foi bem-sucedida.
Se a alocação falhar, o código define o valor de errno para ENOMEM
e retorna um ponteiro nulo (NULL), indicando que a operação falhou.

Se a alocação de memória foi bem-sucedida, a função ft_memcpy() é
usada para copiar o conteúdo da cadeia de caracteres s1 para a nova
cadeia de caracteres alocada. ft_memcpy() é uma função que copia
um bloco de memória de um lugar para outro. O terceiro argumento
indica o número de bytes a serem copiados, incluindo o caractere
nulo final.

Finalmente, a função retorna um ponteiro para a nova cadeia de
caracteres alocada, que contém uma cópia do conteúdo da cadeia
de caracteres s1.

É importante notar que, como a memória é alocada dinamicamente,
a nova cadeia de caracteres precisa ser liberada manualmente
quando não for mais necessária, usando a função free().
*/
