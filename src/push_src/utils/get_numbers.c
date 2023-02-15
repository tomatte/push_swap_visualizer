/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:24:06 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/26 14:51:46 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*get_numbers(int argc, char **argv)
{
	t_lst	*numbers;
	int		i;
	int		num;

	numbers = NULL;
	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		lst_push(&numbers, lst_new(num));
		i++;
	}
	return (lst_first(numbers));
}
