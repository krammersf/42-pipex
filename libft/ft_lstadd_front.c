/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:33:39 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:16:58 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_lstadd_front
// Prototype        | void ft_lstadd_front(t_list **lst, t_list *new);
// Turn in files    | -
// Parameters       | lst: The address of a pointer to the first link of a 
//					| list.
//					| new: The address of a pointer to the node to be added to
//					| the list.
// Return value     | None
// External functs. | None
// Description      | Adds the node ’new’ at the beginning of the list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
Essa função, chamada "ft_lstadd_front", recebe dois parâmetros: "lst", que
é um ponteiro para um ponteiro de uma lista (do tipo "t_list"), e "new", que
é um ponteiro para um novo elemento a ser adicionado na frente da lista.

A função tem como objetivo adicionar o novo elemento "new" no início da lista,
tornando-o o novo primeiro elemento. Para isso, ela realiza duas operações:

1. Atribui ao ponteiro "next" do novo elemento o valor do ponteiro para a
lista "lst", que é o atual primeiro elemento da lista. Isso faz com que o novo
elemento aponte para o antigo primeiro elemento.

2. Atribui ao ponteiro "lst" o valor do ponteiro para o novo elemento "new".
Isso faz com que o ponteiro para a lista (passado por referência na função)
aponte para o novo primeiro elemento, tornando-o o novo início da lista.

Em resumo, essa função adiciona um novo elemento no início de uma lista,
fazendo com que ele se torne o novo primeiro elemento e apontando para o antigo
primeiro elemento.
*/

/*
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	*lst = new;
	new -> next = tmp;
}
*/
