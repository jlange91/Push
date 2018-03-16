/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 18:41:58 by jlange            #+#    #+#             */
/*   Updated: 2015/12/12 20:04:52 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*first;

	first = ft_create_elem(data);
	if (*begin_list)
		first->next = *begin_list;
	*begin_list = first;
}

static void	ft_ptrswp(void **a, void **b)
{
	void *c;

	c = *b;
	*b = *a;
	*a = c;
}

static void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		changed;
	t_list	*cpy;

	changed = 1;
	if (*begin_list)
	{
		while (changed)
		{
			changed = 0;
			cpy = *begin_list;
			while (cpy->next)
			{
				if ((*cmp)(cpy->data, cpy->next->data) > 0)
				{
					ft_ptrswp(&cpy->data, &cpy->next->data);
					changed = 1;
				}
				cpy = cpy->next;
			}
		}
	}
}

void		ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	ft_list_push_front(begin_list, data);
	ft_list_sort(begin_list, cmp);
}
