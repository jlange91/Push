# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlange <jlange@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/25 20:20:06 by jlange            #+#    #+#              #
#    Updated: 2015/10/27 14:38:48 by jlange           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c *.c && ar rc libft.a *.o && rm *.o
