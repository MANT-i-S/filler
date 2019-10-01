/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 15:44:40 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/29 20:32:58 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void print_move(t_table *tab)
{
    ft_putnbr(tab->f_x);
    ft_putchar(' ');
    ft_putnbr(tab->f_y);
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
            tab->h_map1[x][y] = tab->map1[x][y];
            y++;
        }
        x++;
    }
}

void print_array(t_table *tab)
{
    int x = 0;
    int y = 0;

    while(x <= 14)
    {
        y = 0;
        while(y <= 17)
        {
            printf("|%d|", tab->h_map1[x][y]);
            y++;
        }
        printf("\n");
        x++;
    }
}
