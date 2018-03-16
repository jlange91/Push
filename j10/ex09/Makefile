# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlange <jlange@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/01 02:22:04 by jlange            #+#    #+#              #
#    Updated: 2015/12/29 19:54:43 by jlange           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

FLAG = -Wall -Wextra -Werror

HEADER = include/

OPTION = -c -I

OBJS = ft_putchar.o ft_putnbr.o main.o ft_strlen.o \
	  ft_atoi.o calculation.o

EXEC = ft_advanced_do-op

SRCS = src/ft_putchar.c src/ft_putnbr.c src/main.c src/ft_strlen.c \
	  src/ft_atoi.c src/calculation.c

all: $(LIB)

$(LIB) :
		gcc $(FLAG) $(OPTION) $(HEADER) $(SRCS)
		ar rc $(LIB) $(OBJS)
		ranlib $(LIB)
		gcc -o $(EXEC) $(LIB)

clean :
		/bin/rm -f $(OBJS)

fclean : clean
		/bin/rm -f $(LIB) ./$(EXEC)

re : fclean all
