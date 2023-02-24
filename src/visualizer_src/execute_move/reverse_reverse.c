/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:57:57 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/24 10:49:56 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void reverse_reverse(t_lst **a, t_lst **b)
{
	t_lst	*node_a;
	t_lst	*node_b;

	node_a = lst_remove_last(a);
	node_b = lst_remove_last(b);
	first_ab(a, b);
	mutual_move(node_a, node_b, BOXSIZE + 1, BOXSIZE + 1, 'l');
	mutual_move(node_a, node_b, lst_size(*a), lst_size(*b), 't');
	spaces_wipe(lst_first(*a));
	spaces_wipe(lst_first(*b));
	put_stack(*a, YSTACK_A + 1, XSTACK_A);
	put_stack(*b, YSTACK_B + 1, XSTACK_B);
	mutual_move(node_a, node_b, BOXSIZE + 1, BOXSIZE + 1, 'r');
	lst_add_front(a, node_a);
	lst_add_front(b, node_b);
}
