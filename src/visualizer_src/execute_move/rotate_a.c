/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:10:18 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/24 10:50:21 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rotate_a(t_lst **stack)
{
	int		move_bottom;
	t_lst	*node;

	node = lst_remove_first(stack);
	move_bottom = lst_size(*stack);
	move_number(node, BOXSIZE + 1, 'r', DEFAULT_DURATION);
	move_number(node, move_bottom, 'b', DEFAULT_DURATION);
	spaces_wipe(lst_last(*stack));
	put_stack(*stack, YSTACK_A, XSTACK_A);
	move_number(node, BOXSIZE + 1, 'l', DEFAULT_DURATION);
	lst_push(stack, node);
}
