/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_map_val.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:08:35 by sholiak           #+#    #+#             */
/*   Updated: 2019/10/03 17:28:55 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void player_val(t_table *tab, char *line)
{
    get_next_line(0, &line);
    if (ft_strstr(line, "p1 : [players/sholiak.filler]"))
        tab->myplayer = -7;
    else if (ft_strstr(line, "p2 : [players/sholiak.filler]"))
        tab->myplayer = -8;
}

void map_val(t_table *tab, char *line)
{
    get_next_line(0, &line);
    if (ft_strstr(line, "Plateau 15 17:"))
    {
        tab->m_max_x = 15;
        tab->m_max_y = 17;
    }
    else if (ft_strstr(line, "Plateau 24 40:"))
    {
        tab->m_max_x = 24;
        tab->m_max_y = 40;
    }
    else if (ft_strstr(line, "Plateau 100 99:"))
    {
        tab->m_max_x = 100;
        tab->m_max_y = 99;
    }
    map_alloc(tab);
}

void    map_alloc(t_table *tab)
{
    int x;

    x = 0;
    tab->map = (int**)malloc(sizeof(int*) * tab->m_max_x);
    while(x <= tab->m_max_x)
    {
        tab->map[x] = (int*)malloc(sizeof(int) * tab->m_max_y);
        x++;
    }
    x = 0;
    tab->h_map = (int**)malloc(sizeof(int*) * tab->m_max_x);
    while(x <= tab->m_max_x)
    {
        tab->h_map[x] = (int*)malloc(sizeof(int) * tab->m_max_y);
        x++;
    }
}

void map_fill(t_table *tab, char *line)
{
    int i;
    int x;
    int y;

    x = 0;
    get_next_line(0, &line);
    if (ft_strstr(line, "0123456789"))
    {
        while (x < tab->m_max_x)
        {
            get_next_line(0, &line);
            y = 0;
            i = 4;
            while (y < tab->m_max_y)
            {
                if ((line[i] == 'o' || line[i] == 'O') && tab->myplayer == -7)
                    tab->map[x][y] = 99;
                else if((line[i] == 'x' || line[i] == 'X') && tab->myplayer == -8)
                    tab->map[x][y] = 99;
                else if(line[i] == 'x' || line[i] == 'X' || line[i] == 'o' || line[i] == 'O')
                    tab->map[x][y] = 0;
                else 
                    tab->map[x][y] = 42;
                i++;
                y++;
            }
            x++;
        }
    }
}
