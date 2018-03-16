/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 14:43:36 by jlange            #+#    #+#             */
/*   Updated: 2015/10/29 14:43:37 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str);

int		test(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\t') || (c == '\0'))
		return (0);
	else
		return (1);
}

int		string_length(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!(test(str[i + 1])) && test(str[i]))
		{
			count++;
		}
		i++;
	}
	return (count);
}

void	malloc_value(char *str, char **tab)
{
	int	i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (test(str[i]) && !(test(str[i + 1])))
		{
			tab[k] = (char*)malloc(sizeof(char) * j + 1);
			j = -1;
			k++;
		}
		i++;
		j++;
	}
}

void	ft_filltab(char **tab, char *str, int i, int j)
{
	int	k;

	k = 0;
	while (str[i])
	{
		if (k < string_length(str) && test(str[i]))
		{
			while (test(str[i]))
			{
				tab[k][j] = str[i];
				j++;
				i++;
			}
			tab[k][j] = '\0';
			k++;
			j = 0;
		}
		else if (k >= string_length(str))
			tab[k] = 0;
		i++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * string_length(str) + 1)))
		return (NULL);
	malloc_value(str, tab);
	ft_filltab(tab, str, i, j);
	return (tab);
}
