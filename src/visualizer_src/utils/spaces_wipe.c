/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spaces_wipe.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:28:04 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/24 10:43:05 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	spaces_wipe(t_lst *node)
{
	int		box_start;
	char	full_box[] = "            ";

	attron(COLOR_PAIR(0));
	box_start = node->x - (BOXSIZE >> 1) + (num_len(node->num) >> 1);
	if (box_start < 0)
		box_start = 0;
	mvprintw(node->y, box_start, "%s", full_box);
	attroff(COLOR_PAIR(0));
}
