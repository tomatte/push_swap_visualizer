/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:41:18 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/15 10:41:23 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_lst(t_lst *lst)
{
	if (!lst)
		ft_printf("Empty List\n");
	lst = lst_first(lst);
	while (lst)
	{
		ft_printf("%d\t(%d)\n", lst->num, lst->index);
		lst = lst->next;
	}
	ft_printf("\n");
}
