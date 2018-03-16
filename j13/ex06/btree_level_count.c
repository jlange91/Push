/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/29 18:52:06 by jlange            #+#    #+#             */
/*   Updated: 2015/12/29 18:54:10 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		ft_max(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

int		btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (ft_max(1 + btree_level_count(root->left),
				1 + btree_level_count(root->right)));
}
