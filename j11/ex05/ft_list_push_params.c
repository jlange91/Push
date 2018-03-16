/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 00:11:46 by jlange            #+#    #+#             */
/*   Updated: 2015/12/09 15:02:12 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*tmp;

	i = 0;
	if (ac == 0)
		return (NULL);
	list = ft_create_elem(av[0]);
	list->next = NULL;
	while (++i < ac)
	{
		tmp = list;
		list = ft_create_elem(av[i]);
		list->next = tmp;
	}
	return (list);
}
