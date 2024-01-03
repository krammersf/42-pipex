# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fde-carv <fde-carv@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 11:39:14 by fde-carv          #+#    #+#              #
#    Updated: 2023/04/18 21:04:38 by fde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Based on intra video, C Piscine - C 09, C 11
# https://elearning.intra.42.fr/notions/c-piscine-c-09-c-11/subnotions/makefile-example/videos/makefile-example

# ===================================================================================================================
# 					** GENERAL CONFIG & FLAGS **
# ===================================================================================================================

NAME 		= 	libft.a
RM 			= 	/bin/rm -f

# "use cc"
CC 			= 	cc

# "submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror"
CFLAGS 		= 	-Wall -Wextra -Werror

# "You must use the command ar to create your library."
LIB1 		= 	ar -rc
LIB2		=	ar -s
#LIB3 		= 	ranlib

# ===================================================================================================================
# 					** MANDATORY PART **
# ===================================================================================================================

# Part 1 - Libc functions (ft_isalpha, ... ft_strdup)
# Part 2 - Additional functions (ft_substr, ..., ft_putnbr_fd)
SRC_MAND 	= 	ft_isalpha.c 	\
				ft_isdigit.c 	\
				ft_isalnum.c 	\
				ft_isascii.c 	\
				ft_isprint.c 	\
				ft_toupper.c 	\
				ft_tolower.c 	\
				ft_atoi.c 		\
				ft_calloc.c 	\
				ft_bzero.c 		\
				ft_strlen.c 	\
				ft_memset.c 	\
				ft_memcpy.c 	\
				ft_memmove.c 	\
				ft_strlcpy.c 	\
				ft_strlcat.c 	\
				ft_strchr.c 	\
				ft_strrchr.c 	\
				ft_strncmp.c 	\
				ft_memchr.c 	\
				ft_memcmp.c 	\
				ft_strnstr.c 	\
				ft_strdup.c 	\
				ft_substr.c 	\
				ft_strjoin.c 	\
				ft_strtrim.c 	\
				ft_split.c 		\
				ft_itoa.c 		\
				ft_strmapi.c 	\
				ft_striteri.c 	\
				ft_putchar_fd.c \
				ft_putstr_fd.c 	\
				ft_putendl_fd.c \
				ft_putnbr_fd.c

# Takes the variable value ${SRCS_MAND}, which is a string composed of words separated by spaces, and for each word,
# replace the suffix .c with .o
OBJS_MAND 	= 	${SRC_MAND:.c=.o}			

# ===================================================================================================================
# 					** BONUS PART **
# ===================================================================================================================

# From Common Instructions: "Bonuses must be in a different file _bonus.{c/h} if the subject does not specify anything else."
# From Mandatory part: "Turn in files Makefile, libft.h, ft_*.c"
SRC_BONUS 	= 	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

OBJS_BONUS 	= 	${SRC_BONUS:.c=.o}

# ===================================================================================================================
# 					** RULES **
# ===================================================================================================================

# "Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re."
# "NAME, all, clean, fclean, re" @ page 6/16

# Compile the sources (*.c) to object files (*.o)
# Then generate a library file and index it
# 'nm libft.a' to check content
$(NAME)	:	$(OBJS_MAND)
			$(LIB1) $(NAME) $(OBJS_MAND)
			$(LIB2) $(NAME)

# 'all' is the second rule so 'libft.a' (NAME) will show message library filename 'make: `libft.a' is up to date.' when trying to relink
all 	: 	$(NAME)

# Sample:
# cc -Wall -Wextra -Werror -c ft_isalpha.c -o ft_isalpha.o
#	-c				Only run preprocess, compile, and assemble steps
#	-o <file>		Write output to <file>
#	$< and $@		https://www.gnu.org/software/make/manual/make.html#Automatic-Variables
#%.o 	: 	%.c
#			$(CC) $(CFLAGS) -c $< -o $@

# Clean object files (*.o)
clean 	:
			$(RM) $(OBJS_MAND) $(OBJS_BONUS)

# Clean object files (*.o) and the binary file
fclean	: 	clean
			$(RM) $(NAME)

# Clean object files (*.o) and the binary file; 
# Then create the binary file again, and generate the library and index it
re 		: 	fclean all

# "To turn in bonuses to your project, you must include a rule bonus to your Makefile"
# "Makefile must not relink" (https://42born2code.slack.com/archives/CMX2R5JSW/p1634727271200100?thread_ts=1634724450.199600&cid=CMX2R5JSW)
bonus	:	$(OBJS_BONUS)
			$(LIB1) $(NAME) $(OBJS_BONUS)
			$(LIB2) $(NAME)
# bonus	:	$(OBJS_BONUS)
# 			$(LIB1) $(NAME) $(OBJS_MAND) $(OBJS_BONUS)
#			$(LIB2) $(NAME)


rebonus	:	fclean bonus

# .PHONY rule in order to avoid relinking
.PHONY	:	all clean fclean re bonus rebonus	

# ===================================================================================================================
# 					** MAKEFILE ** 
# ===================================================================================================================

#  Este Makefile é utilizado para compilar e gerar uma biblioteca estática chamada "libft.a" 
#  que contém várias funções úteis.

#  - A primeira linha define a variável NAME como "libft.a", que é o nome da biblioteca que será gerada.
#  - A segunda linha define a variável RM como "/bin/rm -f", que será utilizada para remover arquivos.
#  - A terceira linha define a variável CC como "cc", que é o compilador padrão do sistema.
#  - A quarta linha define a variável CFLAGS com algumas opções de compilação, incluindo -Wall, -Wextra
#    e -Werror, que ativam algumas verificações adicionais de erros e avisos na compilação.
#  - A quinta linha define a variável LIB1 como "ar -rcs", que é o comando para criar a biblioteca estática
#    a partir dos arquivos objeto (.o).
#  - A sexta linha define a variável LIB2 como "ranlib", que é o comando para indexar a biblioteca gerada.

# ===================================================================================================================
# 					** RULES **
# ===================================================================================================================

#  - A primeira regra é all. Esta regra depende da biblioteca estática gerada, que é definida como a
#    variável NAME. Para gerar esta biblioteca, é necessário compilar todos os arquivos de código-fonte (.c)
#    listados na variável SRCS_MAND, que contém todas as funções obrigatórias. A regra utiliza os comandos
#    definidos nas variáveis LIB1 e LIB2 para criar a biblioteca estática e indexá-la.
#  - A segunda variável é OBJS_MAND. Esta variável é gerada a partir da lista de arquivos de código-fonte da
#    variável SRCS_MAND. A lista de arquivos objeto (.o) gerados é armazenada nesta variável.
#  - A terceira variável é SRC_BONUS, que contém todas as funções extras (ou bonus) que serão adicionadas à
#    biblioteca estática.
#  - A quarta variável é OBJS_BONUS, que é gerada a partir da lista de arquivos de código-fonte da variável
#    SRC_BONUS. A lista de arquivos objeto (.o) gerados é armazenada nesta variável.
#  - A quinta regra é %.o : %.c. Isso indica que para cada arquivo de código-fonte (.c), será gerado um
#    arquivo objeto (.o). A regra utiliza o compilador definido na variável CC, as opções de compilação
#    definidas na variável CFLAGS e o comando de criação de arquivos objeto (cc -c).
#  - A sexta regra é clean, que utiliza o comando definido na variável RM para remover os arquivos objeto
#    gerados (.o) e a biblioteca estática gerada (.a) da lista de funções obrigatórias.
#  - A sétima regra é fclean, que utiliza o comando definido na variável RM para remover apenas a biblioteca
#    estática gerada.
#  - A oitava regra é re, que executa as regras fclean e all, para remover a biblioteca estática e em seguida,
#    gerar uma nova.
#  - A nona regra é bonus. Esta regra é executada quando se deseja gerar a biblioteca estática com as funções
#    extras (ou bonus). A regra depende dos arquivos objeto gerados a partir dos arquivos de código-fonte das
#    funções extras. A variável OBJS
#  - A última linha, .PHONY, é usada para indicar ao Makefile quais regras não correspondem a nomes de arquivos. 
#    Isso é útil para evitar conflitos com arquivos reais que possam ter o mesmo nome de uma regra.

#   Estas linhas fazem parte de um arquivo Makefile usado para automatizar a compilação de um projeto.
#   A palavra-chave .PHONY é usada para declarar um alvo (target) como "fictício" ou "simbólico", ou seja, 
#   um alvo que não se refere a um arquivo real que será criado como resultado da execução da regra, mas sim a
#   uma ação que deve ser executada. É comumente usada para definir alvos que não dependem de arquivos, como
#   clean, fclean, re, bonus e rebonus.
#   -  all: é um alvo que geralmente é usado como padrão. Quando o usuário digita make sem argumentos, este
#      alvo é executado por padrão. Normalmente, este alvo é usado para construir o projeto inteiro.
#   -  clean: é um alvo que remove todos os arquivos temporários gerados pela compilação. Isso pode incluir
#      arquivos objeto, arquivos de dependência, executáveis e outros arquivos temporários.
#   -  fclean: é um alvo que remove todos os arquivos gerados pela compilação, incluindo o executável final.
#      Isso significa que o projeto pode ser completamente reconstruído a partir do zero usando apenas o
#      alvo all.
#   -  re: é um alvo que executa uma limpeza completa do projeto e, em seguida, recompila tudo novamente.
#      Isso é útil quando você faz alterações no código que afetam o resultado final.
#   -  bonus: é um alvo que compila o projeto inteiro, incluindo recursos adicionais ou bônus que não são
#      incluídos no all.
#   -  rebonus: é um alvo que executa uma limpeza completa do projeto, incluindo recursos adicionais ou bônus,
#      e, em seguida, recompila tudo novamente, incluindo esses recursos adicionais.

#  As regras definidas no Makefile são as seguintes:
#  1. all: essa regra depende do nome do arquivo de saída NAME (no caso libft.a) e compila todos os arquivos
#          objetos necessários para gerar a biblioteca. O resultado final será um arquivo com o nome especificado
#          na variável NAME.
#  2. %.o : %.c: essa regra define como gerar um arquivo objeto a partir de um arquivo fonte. O sinal de
#                porcentagem (%) indica que essa regra se aplica a qualquer arquivo fonte ou objeto no diretório.
#                O $< é uma variável especial que representa o primeiro pré-requisito da regra, ou seja, o arquivo
#                fonte, e o $@ é uma outra variável especial que representa o arquivo objeto a ser gerado.
#  3. clean: essa regra remove os arquivos objetos ($(OBJS_MAND) e $(OBJS_BONUS)) gerados durante a compilação.
#  4. fclean: essa regra remove todos os arquivos gerados pela compilação, incluindo a biblioteca ($(NAME)).
#  5. re: essa regra primeiro executa a regra fclean e depois executa a regra all para recompilar a biblioteca
#         a partir do zero.
#  6. bonus: essa regra compila todas as funções bônus e adiciona elas na biblioteca. Ela depende dos arquivos
#            objetos correspondentes ($(OBJS_BONUS)) e usa o comando make para gerar a biblioteca ($(NAME)).
#  7. rebonus: essa regra primeiro executa a regra fclean e depois compila todas as funções bônus a partir do zero.
#  8. .PHONY: indica ao Makefile que as regras não correspondem a nomes de arquivos reais, mas sim a ações a serem
#             executadas. Isso é importante para evitar conflitos com arquivos que possam ter o mesmo nome das regras.

# ===================================================================================================================
# 					** RESUMO --> MAKEFILE // RULES **
# ===================================================================================================================

#  Este é um Makefile para compilar a biblioteca libft.a.
#  libft.a é uma biblioteca que contém uma implementação personalizada de várias funções da biblioteca padrão C,
#  além de algumas funções adicionais.

#  O Makefile contém várias variáveis e regras. Aqui está o que cada um faz:
# 		NAME = libft.a: Define o nome da biblioteca que será gerada.
# 		RM = /bin/rm -f: Define o comando para excluir arquivos.
# 		CC = cc: Define o compilador usado para compilar os arquivos.
# 		CFLAGS = -Wall -Wextra -Werror: Define as flags de compilação que serão usadas.
# 		LIB1 = ar -rcs: Define o comando para criar a biblioteca.
#		LIB2 = ranlib: Define o comando para indexar a biblioteca.
#		SRCS_MAND: Lista de arquivos que compõem a parte obrigatória da biblioteca.
#		OBJS_MAND = ${SRCS_MAND:.c=.o}: Lista de arquivos objeto correspondente aos arquivos fonte da parte
#				    obrigatória da biblioteca.
#		SRC_BONUS: Lista de arquivos que compõem a parte bônus da biblioteca.
#		OBJS_BONUS = ${SRC_BONUS:.c=.o}: Lista de arquivos objeto correspondente aos arquivos fonte da parte
#					 bônus da biblioteca.

#  As regras no Makefile são:
#  1. $(NAME): Regra para compilar a biblioteca. Ela compila os arquivos objeto da parte obrigatória e os arquiva
#              em uma biblioteca $(NAME), e em seguida indexa a biblioteca.
#  2. all: Regra que chama a regra $(NAME). Ela é usada para compilar a biblioteca e é acionada quando o usuário
#		   digita make all.
#  3. %.o: %.c: Regra para compilar um arquivo fonte para um arquivo objeto. Esta regra usa variáveis automáticas
#               como $< (arquivo fonte) e $@ (arquivo objeto).
#  4. clean: Regra para excluir todos os arquivos objeto criados. É acionada quando o usuário digita make clean.
#  5. fclean: Regra para excluir todos os arquivos objeto e a biblioteca criados. É acionada quando o usuário
#             digita make fclean.
#  6. re: Regra que primeiro aciona a regra fclean e, em seguida, a regra all. Ela é usada para recompilar a
#         biblioteca do zero e é acionada quando o usuário digita make re.
#  7. bonus: Regra para compilar a parte bônus da biblioteca. Ela é acionada quando o usuário digita make bonus.
#  8. rebonus: Regra que primeiro aciona a regra fclean e, em seguida, a regra bonus. Ela é usada para recompilar
#              a parte bônus da biblioteca do zero e é acionada quando o usuário digita make rebonus.
#  9. .PHONY: Regra especial para evitar conflitos de nome e garantir que as regras sejam executadas corretamente.
#             Ela não faz nada além disso.

# ===================================================================================================================
# 					** ranlib **
# ===================================================================================================================

#  1. ranlib é um utilitário de linha de comando que é usado para criar e atualizar índices de tabela de símbolos em
#     bibliotecas de arquivos objeto em sistemas Unix e Linux.
#  2. Quando você compila um programa em C ou C++, o compilador produz um arquivo objeto que contém o código de máquina
#     do programa. Esses arquivos objetos podem ser combinados em uma biblioteca, que é um arquivo único que contém
#     vários arquivos objetos, facilitando o compartilhamento de código entre diferentes programas.
#  3. No entanto, quando uma biblioteca é criada, ela precisa de um índice que permita ao sistema localizar rapidamente
#     as funções e variáveis dentro dela. É aqui que o ranlib entra em jogo - ele cria ou atualiza um índice de tabela
#     de símbolos em uma biblioteca de arquivos objeto para que o sistema possa encontrar rapidamente os símbolos
#     necessários.

#  4. O ranlib é normalmente executado automaticamente pelo sistema de compilação (como o make) quando uma biblioteca
#     é criada ou atualizada. Você geralmente não precisa executá-lo manualmente, a menos que esteja criando ou
#     atualizando uma biblioteca de arquivos objeto sem usar um sistema de compilação automatizado.

# ===================================================================================================================
# 					** ar -rcs **
# ===================================================================================================================

#  1. ar -rcs é um comando usado no sistema Unix/Linux para criar ou atualizar uma biblioteca estática de arquivos
#     objeto.
#  2. O comando ar é uma ferramenta utilizada para gerenciar arquivos de bibliotecas no Unix/Linux. Ele pode criar,
#     atualizar, listar e extrair arquivos de bibliotecas estáticas.
#  3. A opção -rcs é usada em conjunto com o comando ar. Cada letra corresponde a uma opção específica:
#     r: substitui ou adiciona arquivos na biblioteca, conforme especificado pelos argumentos seguintes;
#     c: cria uma nova biblioteca, se ela não existir;
#     s: grava um índice de símbolos na biblioteca.
#  4. Portanto, a opção -rcs é usada para criar uma nova biblioteca, atualizar os arquivos existentes na biblioteca
#     e gravar um índice de símbolos.

# ===================================================================================================================
# 					**  %.o 	: 	%.c 		$(CC) $(CFLAGS) -c $< -o $@  **
# ===================================================================================================================

#  1. Essa é a ação da regra de compilação. O símbolo $< é uma variável automática que contém o nome do primeiro
#     pré-requisito da regra (ou seja, o arquivo de código-fonte). O símbolo $@ é uma variável automática que contém
#     o nome do arquivo de saída da regra (ou seja, o arquivo objeto). $(CC) é a variável que contém o nome do
#     compilador que será usado, e $(CFLAGS) é a variável que contém as opções de compilação que serão passadas
#     para o compilador.
#  2. Portanto, a ação da regra de compilação acima compila o arquivo de código-fonte correspondente em um arquivo
#     objeto, usando o compilador especificado em $(CC) e as opções de compilação especificadas em $(CFLAGS).
#     O arquivo de código-fonte é especificado pelo $< e o arquivo objeto é especificado pelo $@. O resultado final
#     é que cada arquivo de código-fonte será compilado em um arquivo objeto com a mesma base de nome e extensão ".o".
