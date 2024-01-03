/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:36:47 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:00 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_lstclear
// Prototype        | void ft_lstclear(t_list **lst, void (*del)(void *));
// Turn in files    | -
// Parameters       | lst: The address of a pointer to a node.
//					| del: The address of the function used to delete the 
//					| content of the node.
// Return value     | None
// External functs. | free
// Description      | Deletes and frees the given node and every successor of 
//					| that node, using the function ’del’ and free(3).
//					| Finally, the pointer to the list must be set to NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	head = *lst;
	while (head)
	{
		temp = head->next;
		(*del)(head->content);
		free(head);
		head = temp;
	}
	*lst = NULL;
}

/*
A função é chamada de "ft_lstclear" e espera receber dois
argumentos: o primeiro é um ponteiro para o ponteiro do início
da lista (ou seja, um ponteiro duplo), e o segundo é um ponteiro
para uma função que será usada para deletar o conteúdo de cada
elemento da lista.

Dentro da função, são criados dois ponteiros: "head" e "temp".
O ponteiro "head" recebe o valor do ponteiro duplo, que aponta
para o início da lista. O ponteiro "temp" será utilizado para
percorrer a lista e ir deletando os elementos um por um.

Em seguida, é feito um loop que percorre a lista enquanto o ponteiro
"head" não for NULL. Dentro desse loop, o ponteiro "temp" é inicializado
com o valor do ponteiro "next" do elemento atual da lista
(ou seja, o próximo elemento da lista).

Em seguida, é chamada a função de deleção (que foi passada como argumento)
para deletar o conteúdo do elemento atual da lista. Isso é feito passando
o conteúdo do elemento (que está armazenado no ponteiro "content" do
elemento) como argumento para essa função.

Depois de deletar o conteúdo, é liberada a memória alocada para o elemento
atual da lista, usando a função "free".

Por fim, o ponteiro "head" é atualizado com o valor do ponteiro "temp"
(que aponta para o próximo elemento da lista), e o loop continua para o
próximo elemento da lista.

Quando o loop termina, todos os elementos da lista foram deletados e suas
memórias foram liberadas. O ponteiro duplo (passado como argumento) é então
atualizado para NULL, indicando que a lista está vazia.
*/
