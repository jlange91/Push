/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 14:25:42 by jlange            #+#    #+#             */
/*   Updated: 2015/11/26 22:39:10 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libd.h"

int		check_and_send(char **av, int (**f)(int, int))
{
	int		i;
	char	*test;

	i = 0;
    test = "+-*%/";
	while (test[i])
	{
		if (test[i] == av[2][0])
		{
			f[i](ft_atoi(av[1]), ft_atoi(av[3]));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	write(1, "0\n", 2);
	return (0);
}

int		main(int ac, char **av)
{
	int (*f[5])(int, int);

	f[0] = &ft_plus;
	f[1] = &ft_minus;
	f[2] = &ft_multiplication;
	f[3] = &ft_modulo;
	f[4] = &ft_division;
	if (ac == 4)
	{
		check_and_send(av, f);
        return (0);
	}
	else
		return (0);
}
