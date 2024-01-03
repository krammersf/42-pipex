# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 15:53:19 by fde-carv          #+#    #+#              #
#    Updated: 2023/06/09 15:53:28 by fde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG	= pipex
SRCS 	= srcs/pipex.c srcs/utils.c
OBJS 	= ${SRCS:.c=.o}
MAIN	= srcs/pipex.c

PROG_B  = pipex_bonus
SRCS_B	= srcs/pipex_bonus.c srcs/utils.c srcs/utils_bonus.c
OBJS_B	= ${SRCS_B:.c=.o}
MAIN_B	= srcs/pipex_bonus.c

HEADER	= -Iincludes

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror -g

.c.o:		%.o : %.c
					@gcc ${CFLAGS} ${HEADER} -c $< -o $(<:.c=.o)

all: 		${PROG}

${PROG}:	${OBJS}
					@echo "\033[32m\n*** >>>  COMPILING LIB  <<< ***\033[0m\n"
					@make re -C ./libft > /dev/null 2>&1
					@$(CC) ${OBJS} -Llibft -lft -o ${PROG} 
					@echo "\033[32m\n*** >>>  PIPEX Compiled  <<< ***\n"

bonus:		${PROG_B}

${PROG_B}:	${OBJS_B}
					@echo "\033[32m\n*** >>>  COMPILING LIB  <<< ***\033[0m\n"
					@make re -C ./libft > /dev/null 2>&1
					@$(CC) ${OBJS_B} -Llibft -lft -o ${PROG_B} 
					@echo "\033[32m\n*** >>>  PIPEX BONUS Compiled  <<< ***\n"

clean:
					@make clean -C ./libft > /dev/null 2>&1
					@rm -f ${OBJS} ${OBJS_B} > /dev/null 2>&1
					@echo "\033[31m\n*** >>>  OBJS FILES Deleted  <<< ***\033[0m\n"

clean2:
					@rm -f tes* > /dev/null 2>&1
					@echo "\033[31m\n*** >>>  TESTE().txt Deleted  <<< ***\033[0m\n"					

fclean: 	
					@echo "\033[0m"
					@make clean -C ./libft > /dev/null 2>&1
					@rm -f ${OBJS} ${OBJS_B} > /dev/null 2>&1
					@rm -f $(NAME) > /dev/null 2>&1
					@rm -f ${PROG} > /dev/null 2>&1
					@rm -f ${PROG_B} > /dev/null 2>&1
					@echo "\033[31m\n*** >>>  EVERYTHING DELETED  <<< ***\033[0m\n"

re:			fclean all

rebonus:	fclean bonus

norm:
					@norminette -R CheckForbiddenSourceHeader ${SRCS} ${SRCS_B} > /dev/null 2>&1
					@norminette -R CheckDefine includes > /dev/null 2>&1
					@norminette -R . > /dev/null 2>&1
					@echo "\033[32m\n*** >>>  NORMINETTE is OK  <<< ***\n"

norm2:
					@norminette -R CheckForbiddenSourceHeader ${SRCS} ${SRCS_B}
					@norminette -R CheckDefine includes
					@norminette -R .
					@echo "\033[32m\n*** >>>  NORMINETTE is OK  <<< ***\n"					

.PHONY: all clean fclean re rebonus bonus norm norm2

# No Makefile, você pode usar o prefixo @ antes de cada comando para evitar que eles sejam
# exibidos no terminal. Além disso, você pode redirecionar a saída de erro (stderr)
# para /dev/null usando 2>/dev/null. Dessa forma, o comando @norminette não será exibido
# no terminal e qualquer saída de erro gerada será descartada.

# expressão @make re -C ./libft no Makefile executa o comando make re no diretório libft
# e suprime a exibição do comando no terminal. Isso é útil para chamar a compilação ou
# construção de uma biblioteca ou subprojeto específico dentro de um projeto maior.

# rm -f é uma opção do comando rm que indica para remover os arquivos especificados mesmo
# se ocorrerem erros ou se os arquivos não existirem. Essa opção evita que o comando exiba
# mensagens de erro caso algum arquivo não possa ser removido.

# -Llibft -lft são opções do compilador que especificam a localização (-L) da biblioteca
# libft e o nome (-l) da biblioteca a ser linkada (libft). Essas opções são usadas para
# vincular a biblioteca ao programa executável, permitindo o uso de funções e recursos
# definidos na biblioteca.

# No contexto de compilação, a opção -I é usada para especificar os diretórios onde
# estão localizados os arquivos de cabeçalho (header files) que serão incluídos no
# processo de compilação. Nesse caso, o diretório "includes" é especificado como um
# diretório de inclusão.
# Ao utilizar essa opção no comando de compilação, o compilador irá procurar pelos
# arquivos de cabeçalho no diretório "includes", permitindo que o código-fonte referencie
# e inclua esses arquivos corretamente.
# Portanto, a declaração HEADER = -Iincludes no Makefile é usada para armazenar a opção
# de inclusão do diretório "includes" em uma variável chamada HEADER, facilitando seu
# uso posteriormente nos comandos de compilação.
