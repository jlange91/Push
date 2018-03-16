/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 19:10:17 by jlange            #+#    #+#             */
/*   Updated: 2015/12/09 14:10:36 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_ptrswp(void **a, void **b)
{
	void *c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
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
