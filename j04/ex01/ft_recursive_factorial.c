/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 17:58:07 by jlange            #+#    #+#             */
/*   Updated: 2015/10/21 19:29:55 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb > 0 && nb <= 12)
		nb = nb * ft_recursive_factorial(nb - 1);
	else
		return (0);
	return (nb);
}
