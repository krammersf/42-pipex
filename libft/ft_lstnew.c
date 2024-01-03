/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:27:23 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:05 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_lstnew
// Prototype        | t_list *ft_lstnew(void *content);
// Turn in files    | -
// Parameters       | content: The content to create the node with.
// Return value     | The new node
// External functs. | malloc
// Description      | Allocates (with malloc(3)) and returns a new node.
// 					| The member variable ’content’ is initialized with
//					| the value of the parameter ’content’. The variable
//					| ’next’ is initialized to NULL.
*/

#include "libft.h" // t_list and NULL definitions

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
Esta é uma função em C que cria um novo elemento de lista ligada,
do tipo "t_list". Ela recebe um ponteiro "content" como parâmetro,
que é o conteúdo que será armazenado no novo elemento. 

Primeiro, a função aloca memória suficiente para armazenar um novo
elemento de lista ligada, utilizando a função "malloc". Caso não seja
possível alocar memória, a função retorna "NULL", indicando erro.

Em seguida, define-se o conteúdo do novo elemento como sendo o parâmetro
"content". E por fim, define-se o próximo elemento da lista como NULL,
uma vez que este será o último elemento da lista.

A função retorna o ponteiro para o novo elemento criado.
*/
