/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_colored.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:04:21 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/24 10:44:00 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	print_colored(t_lst *node, int color)
{
		int		box_start;

		attron(COLOR_PAIR(color));
		box_start = node->x - (BOXSIZE >> 1) + (num_len(node->num) >> 1);
		if (box_start < 0)
			box_start = 0;
		mvprintw(node->y, box_start, "%s", FULL_BOX);
		mvprintw(node->y, node->x, "%d", node->num);
		attroff(COLOR_PAIR(1));
}
