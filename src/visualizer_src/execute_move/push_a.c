/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:31:59 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/24 10:54:55 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	push_a(t_lst **a, t_lst **b)
{
	clear();
	put_stack(*a, YSTACK_A + 1, XSTACK_A);
	put_stack(*b, YSTACK_B, XSTACK_B);
	*b = lst_first(*b);
	move_number(*b, XSTACK_B - XSTACK_A, 'l', DEFAULT_DURATION);
	push(a, b);
	clear();
	put_stack(*a, YSTACK_A, XSTACK_A);
	put_stack(*b, YSTACK_B, XSTACK_B);
}
