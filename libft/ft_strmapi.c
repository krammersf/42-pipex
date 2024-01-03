/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 09:31:37 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/23 10:35:40 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_strmapi
// Prototype        | char *ft_strmapi(char const *s, char (*f)(unsigned int, 
//					| char));
// Turn in files    | -
// Parameters       | s: The string on which to iterate.
//					| f: The function to apply to each character.
// Return value     | The string created from the successive applications of
//					|  ’f’. Returns NULL if the allocation fails.
// External functs. | malloc
// Description      | Applies the function ’f’ to each character of the string 
//					| ’s’, and passing its index as first argument to create a
//					| new string (with malloc(3)) resulting from successive 
//					| applications of ’f’.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
A função ft_strmapi cria uma nova string aplicando a função f
em cada caractere da string s. A nova string resultante é retornada
pela função.

A função recebe dois parâmetros: s, uma string constante, e f, um
ponteiro para uma função que recebe um unsigned int e um caractere
como parâmetros e retorna um caractere.

A função começa verificando se os parâmetros s e f são diferentes de NULL.
Se um deles for NULL, a função retorna NULL.

Em seguida, a função cria uma nova string str alocando memória para ela
usando a função ft_strdup, que copia a string s para a nova string.
Se a alocação de memória falhar, a função retorna NULL.

Em seguida, a função percorre cada caractere da nova string str em um
loop while, aplicando a função f a cada caractere. A função f recebe
o índice do caractere e o próprio caractere como argumentos.
A função f pode ser usada para modificar o caractere, por exemplo,
convertendo-o em maiúsculas ou minúsculas, trocando caracteres por
outros ou aplicando alguma lógica personalizada.

Depois que a função f é aplicada a cada caractere, a função retorna
a nova string str.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char *str = "exemplo de string";
	
	// Converte cada caractere da string para maiúsculo
	char *new_str = ft_strmapi(str, &toupper);
	
	if (new_str == NULL)
	{
		printf("Erro: falha na alocação de memória.\n");
		return 1;
	}	
	printf("String original: %s\n", str);
	printf("Nova string: %s\n", new_str);
	free(new_str);
	return 0;
}
*/