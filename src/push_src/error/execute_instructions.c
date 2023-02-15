/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_instructions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:34:34 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/15 11:08:22 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap_swap(t_lst **a, t_lst **b)
{
	swap(a);
	swap(b);
}

static void	rotate_rotate(t_lst **a, t_lst **b)
{
	rotate(a);
	rotate(b);
}

static void	reverse_reverse(t_lst **a, t_lst **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}

static void	execute(t_lst **a, t_lst **b, char code)
{
	if (code == SA)
		swap(a);
	else if (code == SB)
		swap(b);
	else if (code == SS)
		swap_swap(a, b);
	else if (code == RA)
		rotate(a);
	else if (code == RB)
		rotate(b);
	else if (code == RR)
		rotate_rotate(a, b);
	else if (code == RRA)
		reverse_rotate(a);
	else if (code == RRB)
		reverse_rotate(b);
	else if (code == RRR)
		reverse_reverse(a, b);
	else if (code == PA)
		push(a, b);
	else if (code == PB)
		push(b, a);
}

void	execute_instructions(t_lst **stack_a, t_lst **stack_b, char *codes)
{
	*stack_b = NULL;
	*stack_a = lst_first(*stack_a);
	while (*codes)
		execute(stack_a, stack_b, *codes++);
}
