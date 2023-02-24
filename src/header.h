/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:30:57 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/24 11:05:54 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ncurses.h>
# include <term.h>
# include <unistd.h>
# include <time.h>
# include "./push_src/push_swap.h"
# define BOXSIZE 12
# define VBOXSTART 3
# define HBOXSTART 13
# define YSTACK_B 3
# define XSTACK_B 60
# define YSTACK_A 3
# define XSTACK_A 15
# define DEFAULT_DURATION 20000
# define DARK_BLUE 20
# define FULL_BOX "            "

//execute_move
void	push_a(t_lst **a, t_lst **b);
void	push_b(t_lst **b, t_lst **a);
void	swap_v(t_lst **a);
void	rotate_a(t_lst **stack);
void	rotate_b(t_lst **stack);
void	reverse_b(t_lst **stack);
void	reverse_a(t_lst **stack);
void	execute_moves(t_lst **a, t_lst **b, char *codes);
void	rotate_rotate(t_lst **a, t_lst **b);
void 	reverse_reverse(t_lst **a, t_lst **b);
void	swap_swap(t_lst **a, t_lst **b);

//utils
void	put_stack(t_lst *stack, int y_start, int x_start);
void	move_number(t_lst *stack, int length, char direction, int duration);
int		num_len(int n);
void	spaces_wipe(t_lst *node);
void	mutual_move(t_lst *node_a, t_lst *node_b, int len_a, int len_b, char direction);
void	print_colored(t_lst *node, int color);

#endif