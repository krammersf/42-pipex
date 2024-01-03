/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:20:14 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:03 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_lstlast
// Prototype        | t_list *ft_lstlast(t_list *lst);
// Turn in files    | -
// Parameters       | lst: The beginning of the list.
// Return value     | Last node of the list
// External functs. | None
// Description      | Returns the last node of the list.
*/

#include "libft.h" // t_list and NULL definitions

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
A função ft_lstlast retorna o último elemento de uma lista encadeada.
Ela recebe como parâmetro o primeiro elemento da lista (lst). Caso a
lista esteja vazia, a função retorna NULL. Caso contrário, a função
percorre a lista até encontrar o último elemento (lst->next == NULL) e o retorna.
*/