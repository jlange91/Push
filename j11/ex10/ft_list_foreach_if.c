/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:55:04 by jlange            #+#    #+#             */
/*   Updated: 2015/12/09 13:36:04 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
void *data_ref, int (*cmp)())
{
	t_list	*cpy;

	cpy = begin_list;
	while (cpy)
	{
		if (!(*cmp)(cpy->data, data_ref))
			(*f)(cpy->data);
		cpy = cpy->next;
	}
}
