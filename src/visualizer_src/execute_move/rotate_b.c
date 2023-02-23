/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:10:18 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/23 14:28:22 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rotate_b(t_lst **stack)
{
	int		move_bottom;
	t_lst	*node;

	node = lst_remove_first(stack);
	move_bottom = lst_size(*stack);
	move_number(node, 10, 'r', DEFAULT_DURATION);
	move_number(node, move_bottom, 'b', DEFAULT_DURATION);
	spaces_wipe(lst_last(*stack));
	put_stack(*stack, YSTACK_B, XSTACK_B);
	move_number(node, 10, 'l', DEFAULT_DURATION);
	lst_push(stack, node);
}
