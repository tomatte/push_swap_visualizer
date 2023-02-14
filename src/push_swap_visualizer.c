/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_visualizer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:30:38 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/14 18:23:39 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	move_letter(char c)
{
	char	letter[] = " ";
	int		i;

	letter[0] = c;
	i = 0;
	while (i < 70)
	{
		clear();
		mvprintw(0, i, "o");
		refresh();
		usleep(10000);
		i++;
	}
	int j = 0;
	while (j < 25)
	{
		clear();
		mvprintw(j, i, "o");
		refresh();
		usleep(30000);
		j++;
	}

	while (i > 0)
	{
		clear();
		mvprintw(j, i, "o");
		refresh();
		usleep(10000);
		i--;
	}

	while (j > 0)
	{
		clear();
		mvprintw(j, i, "o");
		refresh();
		usleep(30000);
		j--;
	}

}

int	main(int argc, char **argv)
{
	initscr();
	noecho();
	curs_set(FALSE);

	int	i = 0;
	while (i++ < 10)
		move_letter('o');

	sleep(5);

	endwin();
	return (0);
}
