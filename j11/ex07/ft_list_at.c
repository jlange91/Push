/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:23:37 by jlange            #+#    #+#             */
/*   Updated: 2015/12/12 20:23:45 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*cpy;

	cpy = begin_list;
	while (nbr >= 1)
	{
		if (!cpy)
			return (NULL);
		cpy = cpy->next;
		nbr--;
	}
	return (cpy);
}
