/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 18:02:11 by jlange            #+#    #+#             */
/*   Updated: 2015/11/05 17:03:45 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libd.h"

int		ft_plus(int valeur1, int valeur2)
{
	long int result;

	result = valeur1 + valeur2;
	ft_putnbr(result);
	return (0);
}

int		ft_minus(int valeur1, int valeur2)
{
	long int result;

	result = valeur1 - valeur2;
	ft_putnbr(result);
	return (0);
}

int		ft_multiplication(int valeur1, int valeur2)
{
	long int result;

	result = valeur1 * valeur2;
	ft_putnbr(result);
	return (0);
}

int		ft_division(int valeur1, int valeur2)
{
	long int result;

	if (valeur2 == 0)
	{
		write(1, "Stop : division by zero",
				ft_strlen("STOP : division by zero"));
		return (0);
	}
	else
		result = valeur1 / valeur2;
	ft_putnbr(result);
	return (0);
}

int		ft_modulo(int valeur1, int valeur2)
{
	long int result;

	if (valeur2 == 0)
	{
		write(1, "Stop : modulo by zero", ft_strlen("STOP : modulo by zero"));
		return (0);
	}
	else
		result = valeur1 % valeur2;
	ft_putnbr(result);
	return (0);
}
