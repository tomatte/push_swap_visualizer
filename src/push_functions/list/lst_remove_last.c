/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_remove_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:00:39 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 22:12:40 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*lst_remove_last(t_lst **lst)
{
	t_lst	*removed;
	t_lst	*new_last;

	if (lst == NULL || *lst == NULL)
		return (NULL);
	if (lst_size(*lst) == 1)
	{
		removed = *lst;
		*lst = NULL;
		return (removed);
	}
	removed = lst_last(*lst);
	new_last = removed->prev;
	if (new_last)
		new_last->next = NULL;
	*lst = lst_first(new_last);
	removed->next = NULL;
	removed->prev = NULL;
	return (removed);
}
