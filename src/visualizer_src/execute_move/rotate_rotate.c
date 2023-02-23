/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:12:36 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/23 13:52:47 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

static void	mutual_move(t_lst *node_a, t_lst *node_b, int len_a, int len_b, char direction)
{
	int	i;
	int	big_len;

	big_len = ft_highest(len_a, len_b);
	i = -1;
	while (++i < big_len)
	{
		if (i < len_a)
			move_number(node_a, 1, direction);
		if (i < len_b)
			move_number(node_b, 1, direction);
	}

}

void	rotate_rotate(t_lst **a, t_lst **b)
{
	t_lst	*node_a;
	t_lst	*node_b;

	node_a = lst_remove_first(a);
	node_b = lst_remove_first(b);
	mutual_move(node_a, node_b, 10, 10, 'r');
	mutual_move(node_a, node_b, lst_size(*a), lst_size(*b), 'b');
	spaces_wipe(lst_last(*a));
	spaces_wipe(lst_last(*b));
	put_stack(*a, YSTACK_A, XSTACK_A);
	put_stack(*b, YSTACK_B, XSTACK_B);
	mutual_move(node_a, node_b, 10, 10, 'l');
	lst_push(a, node_a);
	lst_push(b, node_b);
}
