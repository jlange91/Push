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

NAME = ft_hexdump
SRCS = *.c
FLAG = -Wall -Wextra -Werror
OBJ = *.o

all: $(NAME)

$(NAME):
	@gcc $(FLAG) $(SRCS) -c
	@gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
