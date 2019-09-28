/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:12:32 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/27 21:33:54 by sholiak          ###   ########.fr       */
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
    int         tmpmap1[15][17];
    int         heatmap2[25][41];
    int         heatmap3[101][100];
    int         full_piece[25][25];
    int         piece_max;
    int         good;
    int         player;
    int         map_size;
    int         f_x;
    int         f_y;

}					t_table;

void player_map_val();
void map_alloc(t_table *tab);
void map_val(t_table *tab, char *line);
void map_fill_1(t_table *tab, char *line);
void map_fill_2(t_table *tab, char *line);
void map_fill_3(t_table *tab, char *line);
void take_piece(t_table *tab, char *line);
void make_move(t_table *tab);
void    copy_map(t_table *tab);
void print_move(t_table *tab);
void detect_size(t_table *tab, char *line);
int	get_next_line(int const fd, char **line);

#endif