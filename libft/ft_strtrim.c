/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 09:47:54 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:18:36 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_strtrim
// Prototype        | char *ft_strtrim(char const *s1, char const *set);
// Turn in files    | -
// Parameters       | s1: The string to be trimmed.
//					| set: The reference set of characters to trim.
// Return value     | The trimmed string.
//					| NULL if the allocation fails.
// External functs. | malloc
// Description      | Allocates (with malloc(3)) and returns a copy of ’s1’
//					| with the characters specified in ’set’ removed from the 
//					| beginning and the end of the string.
*/

#include "libft.h" // size_t is defined in header <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*
Esta função recebe duas strings como argumentos: s1 e set. Ela remove
os caracteres que estão presentes em set do início e do final da string s1
e retorna a nova string resultante. 

Primeiro, a função verifica se s1 e set não são nulos. Se um deles for nulo,
a função retorna nulo. 

Em seguida, a função percorre a string s1 do início até encontrar um caractere
que não esteja presente em set. Depois disso, a função percorre a string s1 do
final até encontrar um caractere que não esteja presente em set. 

Por fim, a função cria uma nova string, usando a função ft_substr, que é uma
substring de s1 que começa no início e termina no último caractere que não está
presente em set. Essa nova string é retornada pela função.

Se a string de entrada s1 ou o conjunto set forem nulos, a função
retorna NULL.
*/
