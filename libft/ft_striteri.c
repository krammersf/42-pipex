/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:08:02 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/23 10:28:53 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_striteri
// Prototype        | void ft_striteri(char *s, void (*f)(unsigned int, char*));
// Turn in files    | -
// Parameters       | s: The string on which to iterate.
//					| f: The function to apply to each character.
// Return value     | None
// External functs. | None
// Description      | Applies the function ’f’ on each character of the string 
//					| passed as argument, passing its index as first argument. 
//					| Each character is passed by address to ’f’ to be modified
//					| if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			f(i, (&s[i]));
			i++;
		}
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

void	advance_char_by_one(unsigned int index, char* c)
{
	(*c)++;
}

int	main(void)
{
	char str[] = "Hello World!";
	printf("Original string: %s\n", str);
	ft_striteri(str, advance_char_by_one);
	printf("Modified string: %s\n", str);
	return (0);
}
*/

/*
Em resumo, esta função permite aplicar uma função dada a cada caractere
de uma string, passando o índice do caractere e o próprio caractere como
argumentos para a função.

A função ft_striteri() é usada para aplicar uma função dada a cada
caractere em uma string, passando o índice do caractere e o próprio
caractere como argumentos para a função.

A função recebe dois argumentos: um ponteiro para a string s e um ponteiro
para uma função f que leva um índice (unsigned int) e um ponteiro para um
caractere (char*) como parâmetros.

Dentro da função, uma variável i é declarada e inicializada com zero.
Em seguida, a função itera sobre cada caractere da string s usando um
loop while. O loop continua enquanto o caractere atual não é nulo ('\0').
Dentro do loop, a função "f" é chamada com dois argumentos: o índice atual
"i" e o endereço do caractere atual de "s" (s + i). O operador de
parênteses em torno de "f" é usado para garantir que a função "f"
seja chamada antes que o ponteiro seja incrementado.

Depois disso, o índice i é incrementado para apontar para o próximo
caractere na string.

Se a string s passada para a função for NULL, a função não faz nada.
*/
