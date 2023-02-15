/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_by_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:54:00 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 19:27:41 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*lst_find_by_index(t_lst *stack, int index)
{
	stack = lst_first(stack);
	while (stack)
	{
		if (stack->index == index)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
