/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 15:04:27 by jlange            #+#    #+#             */
/*   Updated: 2015/12/13 20:09:51 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_putchar(int a, int b)
{
	ft_putchar('0' + (a / 10));
	ft_putchar('0' + (a % 10));
	ft_putchar(' ');
	ft_putchar('0' + (b / 10));
	ft_putchar('0' + (b % 10));
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			if (a < b)
			{
				ft_put_putchar(a, b);
			}
			b++;
		}
		b = 0;
		a++;
	}
}
