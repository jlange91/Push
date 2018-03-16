/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 15:28:58 by jlange            #+#    #+#             */
/*   Updated: 2015/11/05 20:13:15 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*copy;

	copy = *begin_list;
	if (copy)
	{
		while (copy->next)
			copy = copy->next;
		copy->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
