/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:30:12 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:06 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_lstsize
// Prototype        | int ft_lstsize(t_list *lst);
// Turn in files    | -
// Parameters       | lst: The beginning of the list.
// Return value     | The length of the list
// External functs. | None
// Description      | Counts the number of nodes in a list.
*/

#include "libft.h" // t_list definition

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	temp = lst;
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	lst = temp;
	return (i);
}

/*
Esta função conta quantos elementos existem em uma lista encadeada. 

Ela começa definindo uma variável "i" como zero e, em seguida, entra
em um loop while que percorre toda a lista. A cada iteração, a variável
"i" é incrementada em 1 e o ponteiro "lst" é atualizado para o próximo
elemento da lista. 

O loop continua até que o ponteiro "lst" seja nulo, o que indica que a
lista chegou ao fim. Nesse ponto, a função retorna o valor de "i", que
representa o número total de elementos na lista.
*/
