/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:12:32 by sholiak           #+#    #+#             */
/*   Updated: 2019/10/03 17:11:38 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>

typedef struct		s_table
{
    int         **map;
    int         m_max_x;
    int         m_max_y;
    int         **h_map;
    int         **f_piece;
    int         heat_el;
    int         p_max_x;
    int         p_max_y;
    int         good;
    int         myplayer;
    int         t_x;
    int         t_y;
    int         t_total;
    int         min;
    int         f_x;
    int         f_y;

}					t_table;

void player_val(t_table *tab, char *line);
void map_val(t_table *tab, char *line);
void map_alloc(t_table *tab);
void    map_fill(t_table *tab, char *line);
void take_piece(t_table *tab, char *line);
void detect_size(t_table *tab, char *line);
void piece_alloc(t_table *tab);
void make_move(t_table *tab); //changing;
void copy_map(t_table *tab);
void print_move(t_table *tab);
void heat_map(t_table *tab);
void heating_map(t_table *tab);
void heat_this_piece(t_table *tab, int x, int y);
int try_piece(t_table *tab, int x, int y);
void count_move(t_table *tab, int x, int y);
int	get_next_line(int const fd, char **line);
void print_array(int **array); //remove;
void print_piece(int **array); //remove;

#endif