/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubourge <gubourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 14:06:37 by gubourge          #+#    #+#             */
/*   Updated: 2015/11/01 16:46:48 by gubourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_is_neg(char **str)
{
	while (*(*str) == ' ')
		*str += 1;
	*str += 1;
	if (*(*str - 1) == '-')
		return (1);
	else if (*(*str - 1) == '+')
		return (0);
	*str -= 1;
	return (0);
}

int				ft_atoi(char *str)
{
	int			nb;
	int			i;
	long int	count;
	char		neg;

	i = -1;
	nb = 0;
	count = 1;
	neg = ft_is_neg(&str);
	while (str[++i] <= '9' && str[i] >= '0')
		count *= 10;
	i = -1;
	while (str[++i])
	{
		count /= 10;
		nb = nb + ((str[i] - 48) * count);
	}
	if (neg)
		return (nb *= -1);
	return (nb);
}
