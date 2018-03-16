/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 21:36:56 by jlange            #+#    #+#             */
/*   Updated: 2015/10/27 00:04:42 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(int argc, char **argv)
{
	int i;

	i = 0;
	while (argv[0][i])
	{
		if (argc >= 1)
			ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	ft_print_program_name(argc, argv);
	return (0);
}
