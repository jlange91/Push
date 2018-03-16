/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 19:37:40 by jlange            #+#    #+#             */
/*   Updated: 2015/10/26 22:59:40 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0' && j != size)
		j++;
	while (src[i] != '\0')
	{
		if (j < size - 1)
			dest[j] = src[i];
		j++;
		i++;
	}
	dest[j - 1] = '\0';
	return (j);
}
