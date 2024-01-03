/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:25:14 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/21 15:17:04 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// Function name    | ft_lstmap
// Prototype        | t_list *
//					| ft_lstmap(t_list *lst, void *(*f)(void *), void 
//					| (*del)(void *));
// Turn in files    | -
// Parameters       | lst: The address of a pointer to a node.
//					| f: The address of the function used to iterate on the 
//					| list.
//					| del: The address of the function used to delete the 
//					| content of a node if needed.
// Return value     | The new list.
//					| NULL if the allocation fails.
// External functs. | malloc, free
// Description      | Iterates the list ’lst’ and applies the function ’f’ on 
//					| the content of each node. 
//					| Creates a new list resulting of the successive 
//					| applications of the function ’f’.
//					| The ’del’ function is used to delete the content of a 
//					| node if needed.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	head = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}

/*
A função é chamada de "ft_lstmap" e espera receber três argumentos:
o primeiro é um ponteiro para o início da lista original, o segundo
é um ponteiro para uma função que será aplicada em cada elemento da
lista, e o terceiro é um ponteiro para uma função que será usada para
deletar o conteúdo de cada elemento da lista, caso algo dê errado.

Dentro da função, são criados dois ponteiros: "head" e "temp". O
ponteiro "head" é inicializado com o valor NULL, pois será usado para
armazenar o início da nova lista que será criada. O ponteiro "temp" será
utilizado para criar novos elementos na lista.

Em seguida, é feito um loop que percorre a lista original enquanto ela
não for NULL. Dentro desse loop, é criado um novo elemento na nova lista
(usando a função "ft_lstnew"), e o conteúdo desse elemento é o resultado
da aplicação da função "f" no conteúdo do elemento atual da lista original.

Se por algum motivo não for possível criar o novo elemento, a função
"ft_lstclear" é chamada para deletar todos os elementos da nova lista
que foram criados até agora (para evitar memory leaks), e a função
retorna NULL.

Se a criação do novo elemento for bem-sucedida, ele é adicionado no final
da nova lista usando a função "ft_lstadd_back". E então o loop continua
para o próximo elemento da lista original.

Quando o loop termina, todos os elementos da nova lista foram criados e
adicionados. A nova lista é retornada pela função.

Se algo der errado durante a criação da nova lista (por exemplo, se não
for possível criar um novo elemento), a função retorna NULL.
*/
