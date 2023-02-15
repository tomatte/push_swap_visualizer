/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:40:22 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 12:08:54 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_lst **lst)
{
	t_lst	*first;
	t_lst	*second;
	t_lst	*third;

	if (lst == NULL || *lst == NULL)
		return ;
	if (lst_size(*lst) <= 1)
		return ;
	first = lst_first(*lst);
	second = first->next;
	third = second->next;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	first->next = third;
	*lst = second;
	if (third)
		third->prev = first;
}

void	sa(t_lst **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_lst **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_lst **a, t_lst **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
