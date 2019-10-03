/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primitive_move_filler.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 20:28:06 by sholiak           #+#    #+#             */
/*   Updated: 2019/10/01 16:08:08 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void make_move(t_table *tab)
{
    int x = 0;
    int y = 0;
    int j = 0;
    int i = 0;
    int check;
    int et = 0;

    while(!tab->good)
    {
        j = 0;
        check = 0;
        i = 0;
        x = tab->f_x;
        while(x + tab->piece_max_x <= 15)
        {
            y = tab->f_y;
            while(y + tab->piece_max_y <= 17)
            {
                tab->h_map1[x][y] = tab->h_map1[x][y] + tab->full_piece[j][i];
                i++;
                y++;
            }
            i = 0;
            j++;
            x++;
        }
        x = 0;
        while(x <= 14)
        {
            y = 0;
            while(y <= 16)
            {
                if(tab->h_map1[x][y] == -50)
                check++;
                if (tab->h_map1[x][y] == 6)
                et = 1;
                y++;
            }
            x++;
        }
        if (check == 1 && et == 0)
        {
            tab->good = 1;
            print_move(tab);
        }
        et = 0;
        if(tab->f_y + tab->piece_max_x <= 17)
        tab->f_y++;
        else if(tab-> f_x + tab->piece_max_x <= 15)
        {
            tab->f_x++;
            tab->f_y = 0;
        }
    }
}