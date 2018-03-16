/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 02:05:32 by jlange            #+#    #+#             */
/*   Updated: 2015/10/26 11:31:03 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_condition(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
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
