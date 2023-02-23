/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:05:10 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/23 14:17:33 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

static void	move_left_right_both(t_lst *node_a1, t_lst *node_a2, t_lst *node_b1, t_lst *node_b2, int length)
{
	int	i;

	i = -1;
	while (++i < length)
	{
		move_number(node_a1, 1, 'l');
		move_number(node_a2, 1, 'r');
		move_number(node_b1, 1, 'l');
		move_number(node_b2, 1, 'r');
	}
}

void	swap_swap(t_lst **a, t_lst **b)
{
	first_ab(a, b);
	move_left_right_both((*a)->next, *a, (*b)->next, *b, 5);
	move_number(*a, 1, 'b');
	move_number((*a)->next, 1, 't');
	move_number(*b, 1, 'b');
	move_number((*b)->next, 1, 't');
	move_left_right_both(*a, (*a)->next, *b, (*b)->next, 5);
	swap(a);
	swap(b);
}
