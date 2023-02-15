/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_lst_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:05:02 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/31 17:35:01 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	*lst_to_int_array(t_lst *lst)
{
	int	*numbers;
	int	size;
	int	i;

	size = lst_size(lst);
	if (size <= 0)
		return (NULL);
	numbers = (int *) malloc(sizeof(int) * size);
	if (!numbers)
		return (NULL);
	lst = lst_first(lst);
	i = 0;
	while (lst)
	{
		numbers[i] = lst->num;
		lst = lst->next;
		i++;
	}
	return (numbers);
}

static void	sort_ints(int *numbers[], int size)
{
	int	*nums;
	int	aux;
	int	i;
	int	z;

	if (!numbers || !*numbers)
		return ;
	nums = *numbers;
	i = -1;
	while (++i < size - 1)
	{
		z = i;
		while (++z < size)
		{
			if (nums[z] < nums[i])
			{
				aux = nums[i];
				nums[i] = nums[z];
				nums[z] = aux;
			}
		}
	}
}

static void	set_index(int *numbers, t_lst *lst)
{
	int	size;
	int	i;

	size = lst_size(lst);
	i = 0;
	while (i < size)
	{
		lst = lst_find_by_num(lst, numbers[i]);
		lst->index = i;
		i++;
	}
}

void	fill_lst_index(t_lst *lst)
{
	int	*numbers;
	int	size;

	if (!lst)
		return ;
	numbers = lst_to_int_array(lst);
	if (!numbers)
		return ;
	size = lst_size(lst);
	sort_ints(&numbers, size);
	set_index(numbers, lst);
	free(numbers);
}
