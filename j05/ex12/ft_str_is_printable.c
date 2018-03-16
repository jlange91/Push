/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 02:14:11 by jlange            #+#    #+#             */
/*   Updated: 2015/10/26 22:20:13 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_condition(char str)
{
	if (str >= 32 && str <= 126)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(ft_condition(str[i])))
			return (0);
		i++;
	}
	return (1);
}
