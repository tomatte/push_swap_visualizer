/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_v.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 08:44:56 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/23 14:30:32 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

static void	move_left_right(t_lst *item1, t_lst *item2, int length)
{
	int	i;

	i = -1;
	while (++i < length)
	{
		move_number(item1, 1, 'l', DEFAULT_DURATION);
		move_number(item2, 1, 'r', DEFAULT_DURATION);
	}
}

void	swap_v(t_lst **stack)
{
	*stack = lst_first(*stack);
	move_left_right((*stack)->next, *stack, 5);
	move_number(*stack, 1, 'b', DEFAULT_DURATION);
	move_number((*stack)->next, 1, 't', DEFAULT_DURATION);
	move_left_right(*stack, (*stack)->next, 5);
	swap(stack);
}
