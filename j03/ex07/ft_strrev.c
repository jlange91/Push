/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 08:47:50 by jlange            #+#    #+#             */
/*   Updated: 2015/10/21 13:04:16 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		max;
	char	t;
	int		min;

	max = 0;
	min = 0;
	while (str[max] != '\0')
	{
		max++;
	}
	max--;
	while (max > min)
	{
		t = str[min];
		str[min] = str[max];
		str[max] = t;
		max--;
		min++;
	}
	return (str);
}
