/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:15:44 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 22:34:08 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_lst **lst)
{
	t_lst	*node;

	node = lst_remove_first(lst);
	lst_push(lst, node);
}

void	ra(t_lst **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_lst **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_lst **a, t_lst **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
