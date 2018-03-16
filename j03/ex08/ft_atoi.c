/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 08:49:18 by jlange            #+#    #+#             */
/*   Updated: 2015/10/21 17:19:58 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	i;
	int result;
	int neg;

	neg = 0;
	result = 0;
	i = 0;
	if (str[i] == '-')
	{
		neg = 1;
		i = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			result = result * 10 + str[i] - '0';
		else
			return (0);
		i++;
	}
	if (neg == 1)
		return (result * -1);
	return (result);
}
