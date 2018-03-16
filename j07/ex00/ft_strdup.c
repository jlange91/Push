/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 00:27:29 by jlange            #+#    #+#             */
/*   Updated: 2015/10/27 00:41:04 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*srccpy;
	int		i;

	i = 0;
	srccpy = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i])
	{
		srccpy[i] = src[i];
		i++;
	}
	srccpy[i] = '\0';
	return (srccpy);
}
