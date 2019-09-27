/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 15:44:40 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/27 15:53:05 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void print_move(t_table *tab)
{
    char *x;
    char *y;
    
    x = ft_itoa(tab->f_x);
    y = ft_itoa(tab->f_y);
    ft_putstr("<got (O) : [");
    ft_putstr(x);
    ft_putchar(' ');
    ft_putstr(y);
    ft_putstr("] (");
    ft_putstr(x);
    ft_putchar(',');
    ft_putstr(y);
    ft_putchar(")");
}

int **copy_map(t_table *tab)
{
    int tmpmap1[16][18];
    int x;
    int y;

    while(x <= 15)
    {
        while(y <= 17)
        {
            tmpmap1[x][y] = tab->map1[x][y];
            y++;
        }
        x++;
    }
    return(tmpmap1);
}

int make_move(t_table *tab)
{
    int x;
    int y;
    int j;
    int i;
    int check;
    int **tmpmap1;

    while(!tab->good)
    {
        x = 0;
        j = 0;
        tmpmap1 = copy_map(tab);
        while(tab->full_piece[j][i])
        {
            i = 0;
            while(tab->full_piece[j][i])
            {
                tmpmap1[x][y] = tmpmap1[x][y] + tab->full_piece[j][i];
                i++;
            }
            j++;
        }
        x = 0;
        while(x <= 15)
        {
            y = 0;
            while(y <= 17)
            {
                if(tmpmap1 == 7)
                check++;
                y++;
            }
            x++;
        }
        if (check == 1);
        {
            tab->f_x = x;
            tab->f_y = y;
            printf("YEAH");
        }
    }
}