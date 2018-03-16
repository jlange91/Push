/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 11:36:43 by jlange            #+#    #+#             */
/*   Updated: 2015/11/01 02:53:54 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_params_len(int argc, char **argv)
{
	int i;
	int j;
	int t;

	j = 1;
	t = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
			i++;
		t += i;
		j++;
	}
	return (t);
}

void	ft_change(int argc, char **argv, char *arg)
{
	int i;
	int j;
	int t;

	j = 1;
	t = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			arg[t] = argv[j][i];
			i++;
			t++;
		}
		if (j != argc - 1)
			arg[t] = '\n';
		t++;
		j++;
	}
	arg[t] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	char *arg;

	if (!(arg = (char *)malloc(sizeof(arg) * ft_params_len(argc, argv) + 1)))
		return (NULL);
	ft_change(argc, argv, arg);
	return (arg);
}
