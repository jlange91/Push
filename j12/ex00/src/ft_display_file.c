/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 21:23:22 by jlange            #+#    #+#             */
/*   Updated: 2016/11/03 14:38:32 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"
#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(int ac, char **av)
{
	char	str[2];
	int		fd;
	int		retour;

	fd = open(av[1], O_RDONLY);
	if (ac == 2)
	{
		if (fd != -1)
		{
			while ((retour = read(fd, str, 1)))
			{
				str[retour] = '\0';
				ft_putstr(str);
			}
		}
	}
	else if (ac == 1)
		ft_putstr("File name missing.\n");
	else
		ft_putstr("Too many arguments.\n");
}
