/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_find_by_num.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:13:35 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 19:12:16 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*lst_find_by_num(t_lst *lst, int num)
{
	lst = lst_first(lst);
	while (lst)
	{
		if (lst->num == num)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
