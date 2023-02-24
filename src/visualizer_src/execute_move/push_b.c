/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:20:19 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/24 10:48:40 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	push_b(t_lst **b, t_lst **a)
{
	clear();
	put_stack(*a, YSTACK_A, XSTACK_A);
	put_stack(*b, YSTACK_B + 1, XSTACK_B);
	*a = lst_first(*a);
	move_number(*a, XSTACK_B - XSTACK_A, 'r', DEFAULT_DURATION);
	push(b, a);
	clear();
	put_stack(*a, YSTACK_A, XSTACK_A);
	put_stack(*b, YSTACK_B, XSTACK_B);
}
