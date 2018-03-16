# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlange <jlange@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/01 02:22:04 by jlange            #+#    #+#              #
#*   Updated: 2016/02/08 00:44:35 by jlange           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

LIB = libft.a

FLAG = -Wall -Wextra -Werror

HEADER = include/

OPTION = -c -I

OBJS = ft_putstr.o ft_cat.o ft_putchar.o main.o

EXEC = ft_cat

SRCS = src/ft_putstr.c src/ft_cat.c src/ft_putchar.c src/main.c

all: $(LIB)

$(LIB) :
		@echo "\033[33m----------------------------------\033[0m"
		@echo "\033[36mCompiling in .o\033[0m"
		@gcc $(FLAG) $(OPTION) $(HEADER) $(SRCS)
		@echo "\033[36mCreating library\033[0m"
		@ar rc $(LIB) $(OBJS)
		@echo "\033[36mIncrease the search speed\033[0m"
		@ranlib $(LIB)
		@echo "\033[32mLibrary Created\033[0m"
		@gcc -o $(EXEC) $(LIB)
		@echo "\033[32mExecutable Created\033[0m"
		@echo "\033[33m----------------------------------\033[0m"

clean :
		@echo "\033[33m----------------------------------\033[0m"
		@echo "\033[31mDeleting all .o\033[31m"
		@rm -Rf $(OBJS)
		@echo "\033[32mThe folder is clean !\033[32m"
		@echo "\033[33m----------------------------------\033[0m"

fclean :
		@echo "\033[33m----------------------------------\033[0m"
		@echo "\033[31mDeleting Executable, Library.a and all .o\033[31m"
		@rm -Rf $(LIB) $(OBJS) $(EXEC)
		@echo "\033[32mThe folder is clean\033[32m"
		@echo "\033[33m----------------------------------\033[0m"

re : fclean all
