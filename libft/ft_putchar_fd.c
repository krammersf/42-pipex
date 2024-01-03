/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:01:07 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:13 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_putchar_fd
// Prototype        | void ft_putchar_fd(char c, int fd);
// Turn in files    | -
// Parameters       | c: The character to output.
//					| fd: The file descriptor on which to write.
// Return value     | None
// External functs. | write
// Description      | Outputs the character ’c’ to the given file descriptor.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void)
{
	char a = 'h';
	ft_putchar_fd(a, 3);
	return (0);
}
*/

/*
Este trecho de código em C inclui a biblioteca "libft.h" e define
uma função chamada "ft_putchar_fd" que recebe dois argumentos: um
caractere "c" e um inteiro "fd". A função escreve o caractere "c"
no descritor de arquivo "fd", utilizando a função "write" da biblioteca
padrão do C. Em resumo, essa função escreve um caractere em um
arquivo específico.

Na função ft_putchar_fd, o parâmetro fd significa o file descriptor
(descritor de arquivo) que representa o arquivo no qual você deseja
escrever o caractere c. O file descriptor é um número inteiro que
representa o arquivo aberto pelo processo.

No contexto da função write, o parâmetro fd é usado para especificar
o arquivo no qual você deseja escrever. Esse parâmetro deve ser um inteiro
que representa o file descriptor do arquivo que você deseja escrever.

Os números possíveis para o parâmetro fd dependem do sistema operacional
em que o programa está sendo executado.

No geral, existem três file descriptors padrão que estão abertos quando
um programa é iniciado:
- 0: representa a entrada padrão (stdin), que geralmente é o teclado;
- 1: representa a saída padrão (stdout), que geralmente é o console ou
     terminal onde o programa está sendo executado;
- 2: representa a saída de erro padrão (stderr), que geralmente é o
     console ou terminal onde o programa está sendo executado.
Além desses, outros file descriptors podem ser abertos pelo programa,
dependendo do que ele precisa fazer. Esses file descriptors são geralmente
números inteiros positivos, começando em 3 e indo até um número máximo
definido pelo sistema operacional.

Por exemplo, no Linux, o número máximo de file descriptors é geralmente
1024 ou 2048, dependendo da configuração do sistema. No entanto, alguns
sistemas operacionais podem permitir um número maior ou menor de file
descriptors.
*/