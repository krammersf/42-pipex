/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:02:35 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/22 11:47:55 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// ATOI(3)                    Library Functions Manual                   ATOI(3)
//
// NAME
//      atoi, atoi_l – convert ASCII string to integer
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <stdlib.h>
//
//      int atoi(const char *str);
//
//      #include <xlocale.h>
//
//      int atoi_l(const char *str, locale_t loc);
//
// DESCRIPTION
//      The atoi() function converts the initial portion of the string pointed
//		to by str to int representation.
//
//      It is equivalent to:
//
//            (int)strtol(str, (char **)NULL, 10);
//
//      While the atoi() function uses the current locale, the atoi_l() 
//		function may be passed a locale directly. See xlocale(3) for more 
//		information.
//
// IMPLEMENTATION NOTES
//      The atoi() and atoi_l() functions are thread-safe and async-cancel-safe.
//
//      The strtol() and strtol_l() functions are recommended instead of atoi() 
//		and atoi_l() functions, especially in new code.
//
// ERRORS
//      The function atoi() need not affect the value of errno on an error.
*/

#include "libft.h"

/*
// Now handles extreme cases, spotted after running lib-unit-test
// [KO]: your atoi does not work with over long max value
// [KO]: your atoi does not work with over long min value
//
// INT_MAX =  2147483647 = 0x7FFFFFFF =  2^31 - 1
// Binary representation: 
// 0111 1111 1111 1111 1111 1111 1111 1111
// 31                  15                0
//
// INT_MIN = -2147483648 = 0xFFFFFFFF = -2^31
// Binary representation: 
// 1111 1111 1111 1111 1111 1111 1111 1111
// 31                  15                0
//
// From https://man7.org/linux/man-pages/man3/atoi.3.html
// RETURN VALUE         top
//       The converted value or 0 on error.
*/

int	ft_atoi(const char *str)
{
	unsigned int	result;
	int				sign;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		result = (result * 10) + (*str - '0');
		if (result > (unsigned int)INT_MAX && sign == 1)
			return (-1);
		else if (result > (unsigned int)INT_MIN && sign == -1)
			return (0);
		str++;
	}
	return ((int)(result * sign));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("atoi %d <---> ft_atoi %d\n", atoi("\007 8"), ft_atoi("\007 8"));
	printf("atoi %d <---> ft_atoi %d\n", atoi("\010 9"), ft_atoi("\010 9"));
	return (0);
}
*/

/*
A função ft_atoi converte uma string em um número inteiro.
Ela percorre a string, ignorando espaços em branco no começo,
e verifica se o primeiro caractere é um sinal de mais ou menos.
Em seguida, ela lê os dígitos da string até encontrar um caractere
que não seja um número. Ela vai acumulando o valor lido em uma
variável chamada "result", multiplicando por 10 a cada novo dígito
lido. Se o número resultante for maior que o valor máximo ou menor
que o valor mínimo de um inteiro, a função retorna um erro. Por fim,
a função retorna o valor inteiro, multiplicado pelo sinal adequado.
*/

/*
	while (*str && (*str >= '0' && *str <= '9'))
	{
		result = (result * 10) + (*str - '0');
		if (result > (unsigned int)INT_MAX && sign == 1)
			return (-1);
		else if (result > (unsigned int)INT_MIN && sign == -1)
			return (0);
		str++;
	}
*/
