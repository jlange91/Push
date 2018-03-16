/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 20:49:04 by jlange            #+#    #+#             */
/*   Updated: 2015/12/29 20:38:32 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cat(char *file)
{
	char	buf[BUF_SIZE + 1];
	int		len;
	int		fd;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (errno);
	while ((len = read(fd, buf, BUF_SIZE)) != 0)
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
