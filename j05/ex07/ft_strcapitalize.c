/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 17:23:11 by jlange            #+#    #+#             */
/*   Updated: 2015/10/26 22:07:45 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alpha(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	if (str >= 'a' && str <= 'z')
		return (1);
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int		ft_maj(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	return (0);
}

int		ft_min(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int test;

	i = 0;
	test = 0;
	while (str[i])
	{
		if (ft_min(str[i]) && test == 0)
			str[i] -= 32;
		else if (ft_maj(str[i]) && test == 1)
			str[i] += 32;
		if (!(ft_alpha(str[i])))
			test = 0;
		else
			test = 1;
		i++;
	}
	return (str);
}
