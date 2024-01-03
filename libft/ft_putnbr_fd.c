/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:24:40 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:15 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_putnbr_fd
// Prototype        | void ft_putnbr_fd(int n, int fd);
// Turn in files    | -
// Parameters       | n: The integer to output.
//					| fd: The file descriptor on which to write.
// Return value     | None
// External functs. | write
// Description      | Outputs the integer ’n’ to the given file descriptor.
*/

#include "libft.h"

// INT_MIN = -2147483648
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		write(fd, &"0123456789"[n % 10], 1);
}

/*
Esta é uma função em C que imprime um número inteiro no
console ou em um arquivo especificado pelo descritor de
arquivo (fd). Se o número inteiro for igual a -2147483648,
a função escreverá "-2147483648" no arquivo. Caso contrário,
a função verificará se o número é negativo e, se for, escreverá
o sinal de menos no arquivo e converterá o número em positivo.
Em seguida, a função dividirá o número por 10 e chamará novamente
a função para imprimir o quociente e o resto até que o número seja
menor que 10. Quando o número for menor que 10, a função escreverá
o valor numérico no arquivo.
*/

/*
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
			write(fd, &"0123456789"[n % 10], 1);
	}
}
*/