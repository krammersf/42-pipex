/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:54:21 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:47:47 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_split
// Prototype        | char **ft_split(char const *s, char c);
// Turn in files    | -
// Parameters       | s: The string to be split.
//					| c: The delimiter character.
// Return value     | The array of new strings resulting from the split. 
//					| NULL if the allocation fails.
// External functs. | malloc, free
// Description      | Allocates (with malloc(3)) and returns an array of 
//					| strings obtained by splitting ’s’ using the character ’c’
//					| as a delimiter. 
//					| The array must end with a NULL pointer.
*/

#include "libft.h"

// Function counts the number of words
static int	count_words(char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}

// Function returns the length of chars before the next separator
static int	find_word_length(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

// Functions allocates and copies to a new variable the word
static char	*create_word(char *str, char c)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = find_word_length(str, c);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (!word)
		return (NULL);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

// Function splits a string of chars depending on char
char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**strings;
	int		i;

	if (!s)
		return (NULL);
	str = (char *)s;
	i = 0;
	strings = (char **)malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!strings)
		return (NULL);
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			strings[i] = create_word(str, c);
			i++;
		}
		while (*str && *str != c)
			str++;
	}
	strings[i] = 0;
	return (strings);
}

/*
char	**ft_free_stuff(char **new, size_t i)
{
	while (i > 0)
	{
		i--;
		free((void *)new[i]);
	}
	free(new);
	return (NULL);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	**ft_split(char const *s, char c);

int main()
{
    char str[] = "a minha bicicleta verde e azul";
    char **strings = ft_split(str, ' ');

    if (strings == NULL)
    {
        printf("Error: failed to split string\n");
        return 1;
    }

    for (int i = 0; strings[i] != NULL; i++)
    {
        printf("%s\n", strings[i]);
        free(strings[i]);
    }

    free(strings);

    return 0;
}
*/

/*
#include <stdio.h>

static int	count_words(char *str, char c);

int main()
{
    char str[] = "a minha bicicleta verde e azul";
    int num_words = count_words(str, ' ');

    printf("Number of words: %d\n", num_words);

    return 0;
}
*/

/*
Esta é uma função em C que divide uma string em substrings, com base em
um caractere separador. A função começa contando o número de palavras na
string usando a função count_words. Em seguida, encontra o comprimento da
palavra antes do próximo separador usando a função find_word_length. Por fim,
aloca e copia a palavra em uma nova variável usando a função create_word.
Essas três funções são usadas para criar a função principal ft_split, que
recebe uma string e um caractere separador e retorna um array de strings contendo
as substrings divididas.
*/