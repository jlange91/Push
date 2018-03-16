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

OBJS = ft_putchar.o ft_putstr.o ft_display_file.o main.o

EXEC = ft_display_file

SRCS = src/ft_putchar.c src/main.c src/ft_putstr.c src/ft_display_file.c

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
