/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:12:32 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/29 21:12:10 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>

typedef struct		s_table
{
    int         map1[15][17];
    int         map2[25][41];
    int         map3[101][100];
    int         h_map1[15][17];
    int         h_map2[25][41];
    int         h_map3[101][100];
    int         full_piece[25][25];
    int         heat_el[6][6];
    int         h_x;
    int         h_y;
    int         piece_max_x;
    int         piece_max_y;
    int         good;
    int         myplayer;
    int         map_size;
    int         f_x;
    int         f_y;

}					t_table;

void player_val(t_table *tab, char *line);
void map_alloc(t_table *tab);
void map_val(t_table *tab, char *line);
void map_fill_1(t_table *tab, char *line);
void map_fill_2(t_table *tab, char *line);
void map_fill_3(t_table *tab, char *line);
void take_piece(t_table *tab, char *line);
//void make_move(t_table *tab); //changing;
void copy_map(t_table *tab);
void print_move(t_table *tab);
void detect_size(t_table *tab, char *line);
void heat_map_1(t_table *tab);
int	get_next_line(int const fd, char **line);
void print_array(t_table *tab); //remove;

#endif