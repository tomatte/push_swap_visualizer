/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 13:13:58 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 19:18:50 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//add node to the end of list
void	lst_push(t_lst **lst, t_lst *node)
{
	if (lst == NULL || node == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = node;
		return ;
	}
	*lst = lst_last(*lst);
	(*lst)->next = node;
	node->prev = *lst;
}
