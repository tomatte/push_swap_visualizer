/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_visualizer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:30:38 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/15 14:29:30 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

//start writing (meio - index)
//criar uma funcao pra automatizar a escrita no meio do NUMBER_BOX
//NUMBER_BOX é uma caixa imaginaria em que o numero está escrito (talvez essa box seja delimitada por um background-color)

int	get_boxmiddle(int number)
{
	char	str_num[20];
	int		middle_write;
	
	sprintf(str_num, "%d", number);
	middle_write = (BOXSIZE >> 1) - (strlen(str_num) >> 1);
	return (middle_write + HBOXSTART);
}

static void	put_numbers()
{
	int		numbers;
	int		y;
	int		x;
	int		box_end;
	int		middle_write;
	int		rand_num;
	

	box_end = HBOXSTART + BOXSIZE;
	numbers = -10;
	y = VBOXSTART;
	x = HBOXSTART - 1;
	while (++y <= 100)
	{
		rand_num = rand();
		if (rand_num % 2 == 0)
			rand_num %= 10000;
		mvprintw(y, get_boxmiddle(rand_num), "%d", rand_num);
	}
}

static void	put_stack(t_lst *stack)
{
	int		y;
	int		x;
	int		middle_write;
	
	y = VBOXSTART;
	stack = lst_first(stack);
	while (stack)
	{
		x = get_boxmiddle(stack->num);
		mvprintw(y, x, "%d", stack->num);
		stack->x = x;
		stack->y = y;
		stack = stack->next;
		y++;
	}
}

static void	init_curses(void)
{
	initscr();
	start_color();
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

	put_stack(stack_a);
	refresh();
	move_number(lst_find_by_index(stack_a, 1), 30, 'r');
	move_number(lst_find_by_index(stack_a, 1), 12, 'b');
	move_number(lst_find_by_index(stack_a, 1), 40, 'l');
	move_number(lst_find_by_index(stack_a, 1), 12, 't');
	move_number(lst_find_by_index(stack_a, 1), 10, 'r');
	sleep(5);
	endwin();
	print_stack_xy(stack_a);
	clear_memory(stack_a, stack_b, codes);
	return (0);
}
