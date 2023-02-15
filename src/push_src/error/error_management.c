/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:08:08 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/15 11:08:16 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	no_argument(int argc)
{
	if (argc == 1)
		exit(1);
}

void	error_management(int argc, char **argv)
{
	no_argument(argc);
	check_numbers(argc, argv);
	check_numbers_size(argc, argv);
	check_duplicated_values(argc, argv);
}
