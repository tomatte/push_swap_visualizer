/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_visualizer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:30:38 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/24 09:09:25 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	start_colors(void)
{
	start_color();
	use_default_colors();
	init_pair(1, COLOR_WHITE, DARK_BLUE);
}

static void	init_curses(void)
{
	initscr();
	start_colors();
	cbreak();
	noecho();
	curs_set(FALSE);
}

static void	fill_stacks(t_lst **a, t_lst **b, int argc, char **argv)
{
	*a = get_numbers(argc, argv);
	fill_lst_index(*a);
	*b = NULL;
}

static void	clear_memory(t_lst *a, t_lst *b, char *codes)
{
	lst_clear(a);
	lst_clear(b);
	free(codes);
}

static void	print_stack_xy(t_lst *stack)
{
	while (stack)
	{
		ft_printf("num %d; index %d; x: %d; y: %d\n", stack->num, stack->index, stack->x, stack->y);
		stack = stack->next;
	}
}

int	main(int argc, char **argv)
{
	t_lst	*stack_a;
	t_lst	*stack_b;
	char	*codes;

	error_management(argc, argv);
	codes = read_instructions();
	fill_stacks(&stack_a, &stack_b, argc, argv);
	init_curses();
	put_stack(stack_a, YSTACK_A, XSTACK_A);
	refresh();
	execute_moves(&stack_a, &stack_b, codes);
	getch();
	endwin();
	clear_memory(stack_a, stack_b, codes);
	return (0);
}
