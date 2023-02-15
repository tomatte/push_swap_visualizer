/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_get_first.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:14:28 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 20:19:38 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*lst_remove_first(t_lst **lst)
{
	t_lst	*removed;
	t_lst	*new_first;

	if (lst == NULL || *lst == NULL)
		return (NULL);
	removed = lst_first(*lst);
	new_first = removed->next;
	removed->next = NULL;
	removed->prev = NULL;
	if (new_first)
		new_first->prev = NULL;
	*lst = new_first;
	return (removed);
}
