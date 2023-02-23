/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:20:19 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/23 14:27:01 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	push_b(t_lst **b, t_lst **a)
{
	clear();
	put_stack(*a, 3, 10);
	put_stack(*b, 4, 40);
	*a = lst_first(*a);
	move_number(*a, 30, 'r', DEFAULT_DURATION);
	push(b, a);
	clear();
	put_stack(*a, 3, 10);
	put_stack(*b, 3, 40);
}
