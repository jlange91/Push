/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 01:31:43 by jlange            #+#    #+#             */
/*   Updated: 2015/10/26 11:27:27 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_condition(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
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
