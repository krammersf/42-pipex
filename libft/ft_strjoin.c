/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:14:05 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:21 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_strjoin
// Prototype        | char *ft_strjoin(char const *s1, char const *s2);
// Turn in files    | -
// Parameters       | s1: The prefix string.
//					| s2: The suffix string.
// Return value     | The new string.
//					| NULL if the allocation fails.
// External functs. | malloc
// Description      | Allocates (with malloc(3)) and returns a new string, 
//					| which is the result of the concatenation of ’s1’ and ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}	
	j = 0;
	while (s2[j])
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}

/*
Esta é uma função que recebe duas strings como argumentos e retorna
uma nova string que é a concatenação das duas primeiras. A nova string
é alocada dinamicamente na memória usando a função malloc e é criada
com tamanho suficiente para armazenar as duas strings originais mais
um caractere nulo no final. 

A função começa verificando se uma das strings é nula, caso contrário,
retorna nulo. Se ambas as strings não forem nulas, alocamos espaço
suficiente na memória para a nova string. 

Em seguida, copiamos os caracteres da primeira string para a nova string
até que cheguemos ao final da primeira string. Depois disso, copiamos os
caracteres da segunda string para a nova string até que cheguemos ao
final da segunda string. Finalmente, adicionamos um caractere nulo ao
final da nova string e a retornamos.

Essa função é útil para concatenar duas strings em C e é frequentemente
usada em programas que trabalham com strings.
*/

/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
*/
