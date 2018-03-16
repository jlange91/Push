/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 17:11:40 by jlange            #+#    #+#             */
/*   Updated: 2015/12/29 20:40:48 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puterr(char *file, int no)
{
	if (no != 0)
	{
		ft_putstr("cat: ");
		ft_putstr(file);
		ft_putstr(": ");
		if (no == ENOENT)
			ft_putstr("No such file or directory\n");
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			ft_puterr(argv[i], ft_cat(argv[i]));
			i++;
		}
		return (0);
	}
	else
		return (1);
}
