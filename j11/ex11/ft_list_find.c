/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:55:04 by jlange            #+#    #+#             */
/*   Updated: 2015/11/26 17:42:47 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*cpy;

	cpy = begin_list;
	while (cpy)
	{
		if (!(*cmp)(cpy->data, data_ref))
			return (cpy);
		cpy = cpy->next;
	}
	return (NULL);
}
