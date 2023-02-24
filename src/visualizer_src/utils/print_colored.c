/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_colored.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:04:21 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/24 10:04:32 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	print_colored(t_lst *node)
{
		int		box_start;
		char	full_box[] = "            ";
	

		attron(COLOR_PAIR(1));
		box_start = node->x - (BOXSIZE >> 1) + (num_len(node->num) >> 1);
		mvprintw(node->y, box_start, "%s", full_box);
		mvprintw(node->y, node->x, "%d", node->num);
		attroff(COLOR_PAIR(1));
}
