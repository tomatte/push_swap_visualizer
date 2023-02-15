/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicated_values.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:57:51 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/23 13:19:25 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	str_is_equal(char *s1, char *s2)
{
	int	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && (s1[i] && s2[i]))
		i++;
	if (s1[i] == s2[i])
		return (1);
	return (0);
}

void	check_duplicated_values(int argc, char **argv)
{
	int	i;
	int	z;

	i = 0;
	while (++i < argc)
	{
		z = i;
		while (++z < argc)
		{
			if (str_is_equal(argv[i], argv[z]))
				die();
		}
	}
}
