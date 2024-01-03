/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:39:18 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:16:59 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_lstdelone
// Prototype        | void ft_lstdelone(t_list *lst, void (*del)(void *));
// Turn in files    | -
// Parameters       | lst: The node to free.
//					| del: The address of the function used to delete the 
//					| content.
// Return value     | None
// External functs. | free
// Description      | Takes as a parameter a node and frees the memory of the 
//					| node’s content using the function ’del’ given as a 
//					| parameter and free the node.
//					| The memory of ’next’ must not be freed.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
Esta função recebe como parâmetros um ponteiro para uma lista encadeada
(t_list) e um ponteiro para uma função que deleta um elemento da lista (del). 

A função verifica se a lista e a função não são nulas. Se qualquer um deles
for nulo, a função retorna. 

Em seguida, a função chama a função del passando como parâmetro o conteúdo
do primeiro nó da lista (lst->content) para que o elemento seja deletado. 

Por fim, a função libera a memória alocada para o primeiro nó da lista usando
a função free.
*/

/*
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst -> content);
	free(lst);
}
*/
