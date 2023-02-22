/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:25:21 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/21 21:27:11 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

//start writing (meio - index)
//criar uma funcao pra automatizar a escrita no meio do NUMBER_BOX
//NUMBER_BOX é uma caixa imaginaria em que o numero está escrito (talvez essa box seja delimitada por um background-color)
int	get_boxmiddle(int number, int x_start)
{
	char	str_num[20];
	int		middle_write;
	
	sprintf(str_num, "%d", number);
	middle_write = (BOXSIZE >> 1) - (strlen(str_num) >> 1);
	return (middle_write + x_start);
}

void	put_stack(t_lst *stack, int y_start, int x_start)
{
	int		y;
	int		x;
	int		middle_write;
	
	y = y_start;
	stack = lst_first(stack);
	while (stack)
	{
		x = get_boxmiddle(stack->num, x_start);
		mvprintw(y, x, "%d", stack->num);
		stack->x = x;
		stack->y = y;
		stack = stack->next;
		y++;
	}
}