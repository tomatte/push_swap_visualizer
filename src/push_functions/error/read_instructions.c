/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 08:17:59 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/15 11:08:11 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static char	get_instruction_code(char *instruction)
{
	if (is_str_equal(instruction, "sa\n"))
		return (SA);
	else if (is_str_equal(instruction, "sb\n"))
		return (SB);
	else if (is_str_equal(instruction, "ss\n"))
		return (SS);
	else if (is_str_equal(instruction, "ra\n"))
		return (RA);
	else if (is_str_equal(instruction, "rb\n"))
		return (RB);
	else if (is_str_equal(instruction, "rr\n"))
		return (RR);
	else if (is_str_equal(instruction, "rra\n"))
		return (RRA);
	else if (is_str_equal(instruction, "rrb\n"))
		return (RRB);
	else if (is_str_equal(instruction, "rrr\n"))
		return (RRR);
	else if (is_str_equal(instruction, "pa\n"))
		return (PA);
	else if (is_str_equal(instruction, "pb\n"))
		return (PB);
	else
		return (0);
}	

static void	error_exit(void *mem, char *msg)
{
	ft_printf("%s\n", msg);
	if (mem)
		free(mem);
	exit(0);
}

static void	free_instruction(char *instruction)
{
	if (instruction)
		free(instruction);
}

static void	add_to_code_array(char **code_array, char *instruction)
{
	char	code;

	code = get_instruction_code(instruction);
	free_instruction(instruction);
	if (!code)
		error_exit(*code_array, "Error");
	ft_str_push_char(code_array, code);
}

char	*read_instructions(void)
{
	char	*instruction;
	char	*code_array;

	code_array = ft_strdup("");
	while (1)
	{
		instruction = get_next_line(0);
		if (instruction == NULL)
			break ;
		add_to_code_array(&code_array, instruction);
	}
	return (code_array);
}
