/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:43:57 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/23 14:25:01 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

static void	move_left(t_lst *stack, int length, int duration)
{
	int	i;
	int	x_clear;;

	i = 0;
	while (++i <= length)
	{
		usleep(duration);
		x_clear = stack->x + num_len(stack->num) - 1;
		mvprintw(stack->y, x_clear, " ");
		stack->x--;
		mvprintw(stack->y, stack->x, "%d", stack->num);
		refresh();
	}
}

static void	move_right(t_lst *stack, int length, int duration)
{
	int	i;

	i = 0;
	while (++i <= length)
	{
		usleep(duration);
		mvprintw(stack->y, stack->x, " ");
		stack->x++;
		mvprintw(stack->y, stack->x, "%d", stack->num);
		refresh();
	}
}

static void	move_bottom(t_lst *stack, int length, int duration)
{
	int	i;

	i = 0;
	while (++i <= length)
	{
		usleep(duration * 2);
		spaces_wipe(stack);
		stack->y++;
		mvprintw(stack->y, stack->x, "%d", stack->num);
		refresh();
	}
}

static void	move_top(t_lst *stack, int length, int duration)
{
	int	i;

	i = 0;
	while (++i <= length)
	{
		usleep(duration  * 2);
		spaces_wipe(stack);
		stack->y--;
		mvprintw(stack->y, stack->x, "%d", stack->num);
		refresh();
	}
}

void	move_number(t_lst *stack, int length, char direction, int duration)
{
	switch (direction)
	{
		case 'r':
			move_right(stack, length, duration);
			break ;
		case 'l':
			move_left(stack, length, duration);
			break ;
		case 'b':
			move_bottom(stack, length, duration);
			break ;
		case 't':
			move_top(stack, length, duration);
			break ;
	}
}
