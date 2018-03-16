/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 02:02:31 by jlange            #+#    #+#             */
/*   Updated: 2015/10/26 11:30:48 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_condition(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
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
