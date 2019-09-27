/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_map_val.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:08:35 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/27 14:45:51 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void player_map_val(t_table *tab)
{
    char *line;

    line = NULL;
    while(get_next_line(0, &line))
    {
    if(ft_strstr(line, "p1 : [players/sholiak.filler]"))
    tab->player = 1;
    else if(ft_strstr(line, "p2 : [players/sholiak.filler]"))
    tab->player = 2;
    else if(ft_strstr(line, "Piece"))
    take_piece(tab, line);
    else if(ft_strstr(line, "0123456789"))
    map_val(tab, line);
    }
}

void map_val(t_table *tab, char *line)
{
    if(ft_strstr(line, "Plateau 15 17:"))
    tab->map_size = 1;
    else if(ft_strstr(line, "Plateau 24 40:"))
    tab->map_size = 2;
    else if(ft_strstr(line, "Plateau 100 99:"))
    tab->map_size = 3;
    if(tab->map_size == 1)
    map_fill_1(tab, line);
    else if(tab->map_size == 2)
    map_fill_2(tab, line);
    else if(tab->map_size == 3)
    map_fill_3(tab, line);
}

void map_fill_1(t_table *tab, char *line)
{
    int i;
    int x;
    int y;

    x = 0;
    get_next_line(0, &line);
    if(ft_strstr(line, "0123456789"))
        {
            while(get_next_line(0, &line) && !ft_strstr(line, "Piece"))
            {
                y = 0;
                i = 4;
                while(line[i])
                {
                    if(line[i] == 'x' || line[i] == 'X')
                        tab->map1[x][y] = -1;
                    else if (line[i] == 'o' || line[i] == 'O')
                        tab->map1[x][y] = -2;
                    i++;
                    y++;
                }
                x++;
            }
        }
}

void map_fill_2(t_table *tab, char *line)
{
    int i;
    int x;
    int y;

    x = 0;
    while(get_next_line(0, &line))
        if(ft_strstr(line, "0123456789"))
        {
            while(get_next_line(0, &line) && !ft_strstr(line, "Piece"))
            {
                y = 0;
                i = 4;
                while(line[i])
                {
                    if(line[i] == 'x' || line[i] == 'X')
                        tab->map2[x][y] = -1;
                    else if (line[i] == 'o' || line[i] == 'O')
                        tab->map2[x][y] = -2;
                    i++;
                    y++;
                }
                x++;
            }
        }
}

void map_fill_3(t_table *tab, char *line)
{
    int i;
    int x;
    int y;

    x = 0;
    while(get_next_line(0, &line))
        if(ft_strstr(line, "0123456789"))
        {
            while(get_next_line(0, &line) && !ft_strstr(line, "Piece"))
            {
                y = 0;
                i = 4;
                while(line[i])
                {
                    if(line[i] == 'x' || line[i] == 'X')
                        tab->map3[x][y] = -1;
                    else if (line[i] == 'o' || line[i] == 'O')
                        tab->map3[x][y] = -2;
                    i++;
                    y++;
                }
                x++;
            }
        }
}