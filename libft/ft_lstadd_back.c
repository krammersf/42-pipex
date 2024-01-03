/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:31:54 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 17:51:50 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_lstadd_back
// Prototype        | void ft_lstadd_back(t_list **lst, t_list *new);
// Turn in files    | -
// Parameters       | lst: The address of a pointer to the first link of a list
//					| new: The address of a pointer to the node to be added to 
//					| the list.
// Return value     | None
// External functs. | None
// Description      | Adds the node ’new’ at the end of the list.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	curr = *lst;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
}

/*
A função é chamada de "ft_lstadd_back" e espera receber dois
argumentos: o primeiro é um ponteiro para o ponteiro do início
da lista (ou seja, um ponteiro duplo), e o segundo é um ponteiro
para o novo elemento que será adicionado no final da lista.

Dentro da função, é criado um ponteiro chamado "curr" que será
utilizado para percorrer a lista.

Em seguida, é feita uma verificação para saber se a lista está
vazia, ou seja, se o ponteiro duplo aponta para NULL. Se for esse
o caso, significa que o novo elemento será o primeiro da lista,
então basta fazer o ponteiro duplo apontar para o novo elemento
e encerrar a função com o comando "return".

Caso contrário, o ponteiro "curr" é inicializado com o valor do
ponteiro duplo. Em seguida, é feito um loop que percorre a lista
até encontrar o último elemento, que é aquele cujo ponteiro "next"
aponta para NULL.

Quando o último elemento é encontrado, basta fazer o ponteiro "next"
desse elemento apontar para o novo elemento que foi passado como
argumento.

Pronto, o novo elemento foi adicionado no final da lista!
*/
