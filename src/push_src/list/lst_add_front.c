/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:40:03 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 20:49:44 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	lst_add_front(t_lst **lst, t_lst *node)
{
	t_lst	*second;
	t_lst	*first;

	if (lst == NULL || node == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = node;
		return ;
	}
	second = lst_first(*lst);
	first = node;
	second->prev = first;
	first->next = second;
	first->prev = NULL;
	*lst = first;
}
