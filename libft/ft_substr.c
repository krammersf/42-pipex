/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:07:06 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:18:36 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_substr
// Prototype        | char *ft_substr(char const *s, unsigned int start, 
//					| size_t len);
// Turn in files    | -
// Parameters       | s: The string from which to create the substring. 
//					| start: The start index of the substring in the string ’s’.
//					| len: The maximum length of the substring.
// Return value     | The substring.
//					| NULL if the allocation fails.
// External functs. | malloc
// Description      | Allocates (with malloc(3)) and returns a substring from
//					| the string ’s’.
//					| The substring begins at index ’start’ and is of maximum 
//					| size ’len’.
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*dest;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	i = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i] && i < len)
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/*
Em resumo, a função "ft_substr" cria e retorna uma nova string que é
uma cópia de uma parte da string "s", começando em "start" e com um
comprimento de "len" caracteres.

A função chamada "ft_substr" recebe três argumentos: uma string "s",
um valor inteiro "start" e um valor "len" do tipo size_t (tamanho).
A função retorna um ponteiro para uma nova string que é uma cópia
de uma subparte da string "s", começando do índice "start" e com um
comprimento de "len" caracteres.

A função começa verificando se a string "s" é nula. Se for nula, a
função retorna nulo. Em seguida, verifica se o comprimento da string
"s" é menor do que o valor "start". Se for menor, a função retorna
uma string vazia.

A função, em seguida, determina o tamanho da substring a ser criada.
Se o tamanho da substring a ser criada for menor do que o valor "len",
a função usa o valor do tamanho da substring.
Caso contrário, usa o valor "len" fornecido.

Em seguida, a função aloca memória para a nova string, com base no
tamanho determinado. Se a alocação de memória falhar, a função retorna nulo.

A função então copia os caracteres da substring da string "s" para a
nova string, um por um, até que alcance o comprimento "len" ou o final
da string "s".

Finalmente, a função adiciona um caractere nulo no final da nova string
e retorna um ponteiro para ela.

// *** RESUMO ***
A função ft_substr recebe uma string, um número inicial e um tamanho
e retorna uma nova string que é uma subcadeia da string original, começando
no número inicial e com o tamanho especificado. Se a string original for
nula, é retornado nulo. Se o número inicial for maior que o comprimento da
string original, uma string vazia é retornada. O tamanho da subcadeia é
limitado pelo comprimento da string original a partir do número inicial.
A função aloca memória dinamicamente para a nova string e a preenche com os
caracteres correspondentes da string original. A nova string é terminada com
um caractere nulo.
*/
