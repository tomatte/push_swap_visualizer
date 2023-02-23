/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 08:42:16 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/23 13:50:38 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

static void	execute(t_lst **a, t_lst **b, char code)
{
	if (code == SA)
		swap_v(a);
	else if (code == SB)
		swap_v(b);
	else if (code == RA)
		rotate_a(a);
	else if (code == RB)
		rotate_b(b);
	else if (code == RR)
		rotate_rotate(a, b);
	else if (code == RRA)
		reverse_a(a);
	else if (code == RRB)
		reverse_b(b);
	else if (code == PA)
		push_a(a, b);
	else if (code == PB)
		push_b(b, a);
}

void	execute_moves(t_lst **a, t_lst **b, char *codes)
{
	*b = NULL;
	*a = lst_first(*a);
	while (*codes)
		execute(a, b, *codes++);
}
