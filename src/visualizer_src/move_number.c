/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:43:57 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/15 14:28:11 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static int	num_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	move_left(t_lst *stack, int length)
{
	int	i;
	int	x_clear;;

	i = 0;
	while (++i <= length)
	{
		usleep(10000);
		x_clear = stack->x + num_len(stack->num) - 1;
		mvprintw(stack->y, x_clear, " ");
		stack->x--;
		mvprintw(stack->y, stack->x, "%d", stack->num);
		refresh();
	}
}

static void	move_right(t_lst *stack, int length)
{
	int	i;

	i = 0;
	while (++i <= length)
	{
		usleep(10000);
		mvprintw(stack->y, stack->x, " ");
		stack->x++;
		mvprintw(stack->y, stack->x, "%d", stack->num);
		refresh();
	}
}

static void	spaces_wipe(t_lst *stack)
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

static void	move_bottom(t_lst *stack, int length)
{
	int	i;

	i = 0;
	while (++i <= length)
	{
		usleep(20000);
		spaces_wipe(stack);
		stack->y++;
		mvprintw(stack->y, stack->x, "%d", stack->num);
		refresh();
	}
}

static void	move_top(t_lst *stack, int length)
{
	int	i;

	i = 0;
	while (++i <= length)
	{
		usleep(20000);
		spaces_wipe(stack);
		stack->y--;
		mvprintw(stack->y, stack->x, "%d", stack->num);
		refresh();
	}
}

void	move_number(t_lst *stack, int length, char direction)
{
	switch (direction)
	{
		case 'r':
			move_right(stack, length);
			break ;
		case 'l':
			move_left(stack, length);
			break ;
		case 'b':
			move_bottom(stack, length);
			break ;
		case 't':
			move_top(stack, length);
			break ;
	}
}
