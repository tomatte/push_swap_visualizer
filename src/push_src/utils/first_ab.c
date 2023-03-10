/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_ab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:59:53 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 15:00:40 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	first_ab(t_lst **a, t_lst **b)
{
	*a = lst_first(*a);
	*b = lst_first(*b);
}
