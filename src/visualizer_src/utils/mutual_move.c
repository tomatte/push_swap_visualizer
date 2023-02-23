/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutual_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:06:01 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/23 14:31:17 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	mutual_move(t_lst *node_a, t_lst *node_b, int len_a, int len_b, char direction)
{
	int	i;
	int	big_len;

	big_len = ft_highest(len_a, len_b);
	i = -1;
	while (++i < big_len)
	{
		if (i < len_a)
			move_number(node_a, 1, direction, DEFAULT_DURATION / 2);
		if (i < len_b)
			move_number(node_b, 1, direction, DEFAULT_DURATION / 2);
	}
}
