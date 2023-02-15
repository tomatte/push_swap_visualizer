/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numbers_size.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:24:27 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/23 14:07:45 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_int_limit(char *number)
{
	int	sign;
	int	n;
	int	previous;
	int	current;

	sign = 1;
	if (*number == '-')
		sign = -1;
	if (ft_issign(*number))
		number++;
	n = 0;
	while (*number)
	{
		previous = n * sign;
		n = n * 10 + *number - '0';
		current = n * sign;
		if (current / 10 != previous)
			return (0);
		number++;
	}
	return (1);
}

void	check_numbers_size(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!check_int_limit(argv[i]))
			die();
		i++;
	}
}
