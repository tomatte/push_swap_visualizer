/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:25:21 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/24 10:12:44 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

//start writing (meio - index)
//criar uma funcao pra automatizar a escrita no meio do NUMBER_BOX
//NUMBER_BOX é uma caixa imaginaria em que o numero está escrito (talvez essa box seja delimitada por um background-color)
int	get_boxmiddle(int number, int x_start)
{
	int		middle_write;
	
	middle_write = (BOXSIZE >> 1) - (num_len(number) >> 1) - 1;
	return (middle_write + x_start);
}

void	put_stack(t_lst *stack, int y_start, int x_start)
{
	int		y;
	int		middle_write;
	char	full_box[] = "            ";
	
	y = y_start;
	stack = lst_first(stack);
	while (stack)
	{
		stack->x = get_boxmiddle(stack->num, x_start);
		stack->y = y;
		print_colored(stack, 1);
		stack = stack->next;
		y++;
	}
}
