/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 00:04:10 by jlange            #+#    #+#             */
/*   Updated: 2015/12/09 13:32:30 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;

	if (*begin_list)
	{
		list = *begin_list;
		ft_list_clear(&(*begin_list)->next);
		free(list);
	}
	*begin_list = NULL;
}
