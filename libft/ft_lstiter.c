/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:00:14 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:02 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_lstiter
// Prototype        | void ft_lstiter(t_list *lst, void (*f)(void *));
// Turn in files    | -
// Parameters       | lst: The address of a pointer to a node.
//					| f: The address of the function used to iterate on the 
//					| list.
// Return value     | None
// External functs. | None
// Description      | Iterates the list ’lst’ and applies the function ’f’ on
//					| the content of each node.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
Essa função em C se chama "ft_lstiter" e recebe como parâmetros uma lista
encadeada e um ponteiro para uma função que recebe um ponteiro void como
argumento e não retorna nada (void).

O objetivo da função é percorrer cada elemento da lista e aplicar a função
passada como parâmetro para cada conteúdo (content) da lista. Se a lista ou a
função são nulas, a função retorna imediatamente.

Enquanto a lista não chegar ao seu fim (lst != NULL), a função "f" é aplicada
para o conteúdo atual da lista (lst->content) e, em seguida, o ponteiro da lista
é atualizado para o próximo elemento (lst = lst->next).
*/

/*
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}
*/
