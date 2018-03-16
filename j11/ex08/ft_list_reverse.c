/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:37:28 by jlange            #+#    #+#             */
/*   Updated: 2015/12/06 01:39:15 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*cpy;
	t_list	*next_one;
	t_list	*last;

	cpy = *begin_list;
	last = NULL;
	while (cpy)
	{
		next_one = cpy->next;
		cpy->next = last;
		last = cpy;
		cpy = next_one;
	}
	*begin_list = last;
}
