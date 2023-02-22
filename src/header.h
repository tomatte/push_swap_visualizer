/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:30:57 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/21 22:21:21 by dbrandao         ###   ########.fr       */
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
# define HBOXSTART 10

void	move_number(t_lst *stack, int length, char direction);
void	put_stack(t_lst *stack, int y_start, int x_start);

//execute_move
void	push_a(t_lst **a, t_lst **b);
void	push_b(t_lst **b, t_lst **a);

#endif