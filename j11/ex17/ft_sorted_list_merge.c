/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 20:29:24 by jlange            #+#    #+#             */
/*   Updated: 2015/12/12 20:34:06 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void	ft_list_merge(t_list **begin_list, t_list *begin_list2)
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

void		ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}
