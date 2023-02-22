/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_v.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:10:18 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/22 09:50:00 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rotate_a(t_lst **stack)
{
	int		move_bottom;
	t_lst	*node;

	node = lst_remove_first(stack);
	move_bottom = lst_size(*stack);
	move_number(node, 10, 'r');
	move_number(node, move_bottom, 'b');
	spaces_wipe(lst_last(*stack));
	put_stack(*stack, YSTACK_A, XSTACK_A);
	move_number(node, 10, 'l');
	lst_push(stack, node);
}
