/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:30:57 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/15 13:55:43 by dbrandao         ###   ########.fr       */
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

#endif