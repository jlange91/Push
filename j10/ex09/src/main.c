/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 14:25:42 by jlange            #+#    #+#             */
/*   Updated: 2015/11/29 19:59:07 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libd.h"
#include "ft_opp.h"

int		ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	write(1, "error : only [ - + * / % ] are accepted.",
			ft_strlen("error : only [ - + * / % ] are accepted."));
	return (0);
}

int		check_and_send(char **av)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (*gl_opptab[i].c == av[2][0])
		{
			gl_opptab[i].func(ft_atoi(av[1]), ft_atoi(av[3]));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	gl_opptab[5].func(ft_atoi(av[1]), ft_atoi(av[3]));
	ft_putchar('\n');
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		check_and_send(av);
		return (0);
	}
	else
		return (0);
}
