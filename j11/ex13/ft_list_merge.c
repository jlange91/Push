/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 00:16:02 by jlange            #+#    #+#             */
/*   Updated: 2015/12/05 18:46:48 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
	t_list *cpy;

	cpy = *begin_list;
	if (cpy)
	{
		while (cpy->next)
			cpy = cpy->next;
		while (begin_list2)
		{
			cpy->next = begin_list2;
			cpy = cpy->next;
			begin_list2 = begin_list2->next;
		}
	}
	else
		*begin_list = begin_list2;
}
