# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlange <jlange@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/01 02:22:04 by jlange            #+#    #+#              #
#*   Updated: 2015/12/29 20:11:13 by jlange           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

LIB = libft.a

FLAG = -Wall -Wextra -Werror

HEADER = include/

OPTION = -c -I

OBJS = ft_tail.o ft_strlen.o ft_atoi.o

EXEC = ft_tail

SRCS = src/ft_tail.c src/ft_strlen.c src/ft_atoi.c

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
