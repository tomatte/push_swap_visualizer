/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:30:44 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/08 14:42:12 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_position(t_lst *lst, int index)
{
	int	i;

	i = 0;
	lst = lst_first(lst);
	while (lst)
	{
		if (lst->index == index)
			return (i);
		i++;
		lst = lst->next;
	}
	return (-1);
}
