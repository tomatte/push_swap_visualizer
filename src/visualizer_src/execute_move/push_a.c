/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:31:59 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/21 21:51:59 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	push_a(t_lst **a, t_lst **b)
{
	clear();
	put_stack(*a, 4, 10);
	put_stack(*b, 3, 40);
	move_number(*b, 30, 'l');
	push(a, b);
	clear();
	put_stack(*a, 3, 10);
	put_stack(*b, 3, 40);
}
