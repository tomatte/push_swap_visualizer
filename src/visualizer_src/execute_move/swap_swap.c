/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:05:10 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/24 10:55:58 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

static void	move_left_right_both(t_lst *node_a1, t_lst *node_a2, t_lst *node_b1, t_lst *node_b2, int length)
{
	int	i;

	i = -1;
	while (++i < length)
	{
		move_number(node_a1, 1, 'l', DEFAULT_DURATION / 3);
		move_number(node_a2, 1, 'r', DEFAULT_DURATION / 3);
		move_number(node_b1, 1, 'l', DEFAULT_DURATION / 3);
		move_number(node_b2, 1, 'r', DEFAULT_DURATION / 3);
	}
}

void	swap_swap(t_lst **a, t_lst **b)
{
	first_ab(a, b);
	move_left_right_both((*a)->next, *a, (*b)->next, *b, BOXSIZE + 1);
	move_number(*a, 1, 'b', DEFAULT_DURATION / 2);
	move_number((*a)->next, 1, 't', DEFAULT_DURATION / 2);
	move_number(*b, 1, 'b', DEFAULT_DURATION / 2);
	move_number((*b)->next, 1, 't', DEFAULT_DURATION / 2);
	move_left_right_both(*a, (*a)->next, *b, (*b)->next, BOXSIZE + 1);
	swap(a);
	swap(b);
}
