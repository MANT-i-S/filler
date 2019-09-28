/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 15:44:40 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/28 15:49:08 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void print_move(t_table *tab)
{
    char *x;
    char *y;
    
    x = ft_itoa(tab->f_x);
    y = ft_itoa(tab->f_y);
    ft_putstr(x);
    ft_putchar(' ');
    ft_putstr(y);
    ft_putchar('\n');
}

void    copy_map(t_table *tab)
{
    int x;
    int y;

    x = 0;
    while(x <= 14)
    {
        y = 0;
        while(y <= 16)
        {
            tab->tmpmap1[x][y] = tab->map1[x][y];
            y++;
        }
        x++;
    }
}

void make_move(t_table *tab)
{
    int x = 0;
    int y = 0;
    int j = 0;
    int i = 0;
    int check;

    while(!tab->good)
    {
        j = 0;
        copy_map(tab);
        check = 0;
        i = 0;
        x = tab->f_x;
        while(tab->full_piece[j][i])
        {
            y = tab->f_y;
            while(tab->full_piece[j][i])
            {
                tab->tmpmap1[x][y] = tab->tmpmap1[x][y] + tab->full_piece[j][i];
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
                if(tab->tmpmap1[x][y] == 7)
                check++;
                y++;
            }
            x++;
        }
        if (check == 1)
        {
            tab->good = 1;
            print_move(tab);
        }
        if(tab->f_y <= 16)
        tab->f_y++;
        else
        {
            tab->f_x++;
            tab->f_y = 0;
        }
    }
}
