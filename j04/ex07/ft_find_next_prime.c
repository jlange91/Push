/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 19:13:21 by jlange            #+#    #+#             */
/*   Updated: 2015/10/22 20:01:29 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int y;

	i = 0;
	y = 2;
	while (y <= nb)
	{
		if ((nb % y) == 0)
			i++;
		y++;
	}
	if (i == 1)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	if ((ft_is_prime(nb)) == 1)
		return (nb);
	else if (ft_is_prime(nb) == 0)
		return (ft_find_next_prime(nb + 1));
	else
		return (0);
}
