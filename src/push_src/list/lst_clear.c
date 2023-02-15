/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:46:08 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 19:08:59 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	lst_clear(t_lst *lst)
{
	t_lst	*aux;

	lst = lst_first(lst);
	while (lst)
	{
		aux = lst;
		lst = lst->next;
		free(aux);
	}
}
