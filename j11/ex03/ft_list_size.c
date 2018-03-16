/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:01:58 by jlange            #+#    #+#             */
/*   Updated: 2015/12/09 13:45:15 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*copy;
	int		i;

	copy = begin_list;
	i = 0;
	while (copy)
	{
		i++;
		copy = copy->next;
	}
	return (i);
}
