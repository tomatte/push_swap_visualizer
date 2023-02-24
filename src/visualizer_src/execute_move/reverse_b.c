/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:44:38 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/24 10:57:52 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	reverse_b(t_lst **stack)
{
	t_lst	*node;

	node = lst_remove_last(stack);
	*stack = lst_first(*stack);
	move_number(node, BOXSIZE + 1, 'l', DEFAULT_DURATION);
	move_number(node, lst_size(*stack), 't', DEFAULT_DURATION);
	spaces_wipe(lst_first(*stack));
	put_stack(*stack, YSTACK_B + 1, XSTACK_B);
	move_number(node, BOXSIZE + 1, 'r', DEFAULT_DURATION);
	lst_add_front(stack, node);
}
