/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spaces_wipe.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:28:04 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/22 09:31:09 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	spaces_wipe(t_lst *stack)
{
	int	len;
	int	i;

	len = num_len(stack->num);
	i = 0;
	while (i < len)
	{
		mvprintw(stack->y, stack->x + i, " ");
		i++;
	}
}
