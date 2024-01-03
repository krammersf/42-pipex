/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:38:12 by fde-carv          #+#    #+#             */
/*   Updated: 2023/04/24 09:44:20 by fde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Includes, all the headers required by the project

# include <stdlib.h> // definition of size_t and NULL (e.g.: ft_memset)
# include <limits.h> // definition of INT_MAX (ft_atoi)
# include <unistd.h> // definition of write (e.g.: ft_putchar_fd)
# include <stdio.h>

// Part 1 - Libc functions (ordered as shown in the subject file)

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

// Part 2 - Additional functions

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// Bonus part

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif

/*
Esta é a definição de uma estrutura de dados em C chamada t_list
(ou struct s_list). A estrutura tem dois membros:

1. content - um ponteiro void que pode apontar para qualquer tipo
   de dado (é um tipo genérico). É usado para armazenar o conteúdo
   do nó da lista encadeada.
2. next - um ponteiro para outra estrutura t_list, que representa
   o próximo nó da lista encadeada.

Em outras palavras, a estrutura t_list é usada para definir os nós
de uma lista encadeada simples em C, onde cada nó contém um conteúdo
genérico e um ponteiro para o próximo nó da lista.
*/

/*
t_list é uma estrutura de dados em C que é usada para representar
uma lista encadeada simples. Ela é geralmente usada para armazenar
um conjunto de elementos (conteúdo) que podem ser acessados sequencialmente.

Esta estrutura t_list que você postou é composta de dois campos:
1. void *content: é um ponteiro para o conteúdo armazenado na lista.
   Como void * é um ponteiro genérico, pode apontar para qualquer tipo de dados.
2. struct s_list *next: é um ponteiro para o próximo elemento da lista.
   Cada elemento da lista contém um ponteiro para o próximo elemento,
   o que permite a navegação sequencial através da lista.

O nome s_list é apenas uma convenção de nomeação comum em C,
onde o prefixo s_ é frequentemente usado para indicar que se trata
de uma estrutura. O prefixo t_ é usado para indicar que se trata de
um tipo de dados.

Assim, a definição completa typedef struct s_list t_list define um novo
tipo de dados chamado t_list que pode ser usado para declarar variáveis
do tipo lista encadeada.
*/
