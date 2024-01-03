/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 09:44:25 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:18:34 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// STRCHR(3)                 Library Functions Manual                 STRCHR(3)
//
// NAME
//      strchr, strrchr – locate character in string
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      char *
//      strchr(const char *s, int c);
//
//      char *
//      strrchr(const char *s, int c);
//
// DESCRIPTION
//      The strchr() function locates the first occurrence of c (converted to a
//		char) in the string pointed to by s.  
//		The terminating null character is considered to be part of the string; 
//		therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
//
//      The strrchr() function is identical to strchr(), except it locates the 
//		last occurrence of c.
//
// RETURN VALUES
//      The functions strchr() and strrchr() return a pointer to the located 
//		character, or NULL if the character does not appear in the string.
*/

#include "libft.h" // NULL definition

char	*ft_strrchr(const char *s, int c)
{
	const char	*inicio;

	inicio = s;
	while (*s)
		s++;
	if (c == '\0')
		return ((char *)s);
	while (s >= inicio)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
static int	ft_test(const char *s, const char c)
{
	return (strrchr(s, c) == ft_strrchr(s, c));
}
int	main(void)
{
	if (!ft_test("Unbreakable", 'U')
		|| !ft_test("Unbreakable", '\0')
		|| !ft_test("", '\0')
		|| !ft_test("Un\0breakable", '\0')
		|| !ft_test("Un\0breakable", 'r'))
	{
		printf("KO: ft_strrchr\n");
		return (1);
	}
	printf("OK: ft_strrchr\n");
}
*/

/*
Procura a última ocorrência de um caractere numa string.

A função recebe dois argumentos: um ponteiro para a string
a ser pesquisada (s) e um inteiro que representa o caractere
que queremos encontrar (c).

Em seguida, a função declara um ponteiro "inicio" que recebe
o mesmo endereço de memória da string "s".

A função começa a percorrer a string "s" usando um loop while
para encontrar seu final, ou seja, o caractere nulo '\0'.

Se o caractere de pesquisa "c" for um caractere nulo '\0',
a função retorna um ponteiro para o final da string "s".

Caso contrário, se o caractere "c" não for um caractere nulo '\0',
a função continua a procurar por ele percorrendo a string "s" ao
contrário, usando um loop while que verifica cada caractere da
string a partir do final, comparando com o caractere "c".

Se a função encontrar o caractere "c" na string "s", ela retorna
um ponteiro para esse caractere na string.
Caso contrário, se a função não encontrar o caractere "c" na
string "s", ela retorna um ponteiro nulo (NULL).

Essa é uma função útil para lidar com strings em programas em
linguagem C.

O ponteiro "inicio" é criado para salvar o endereço inicial da
string "s". Isso é útil porque, ao percorrer a string para
encontrar seu final, o ponteiro "s" se move para o final da
string e não podemos mais acessar seu início.

Ao salvar o endereço inicial da string em um ponteiro separado,
podemos usá-lo posteriormente para percorrer a string ao contrário
e encontrar a última ocorrência do caractere desejado. Além disso,
também podemos usar o ponteiro "inicio" para garantir que não
modifiquemos o endereço inicial da string "s" durante a busca pelo
caractere desejado.
*/
