/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:20:48 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 22:36:30 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_lst **lst)
{
	t_lst	*node;

	node = lst_remove_last(lst);
	lst_add_front(lst, node);
}

void	rra(t_lst **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_lst **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_lst **a, t_lst **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
