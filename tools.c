/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:04:12 by sholiak           #+#    #+#             */
/*   Updated: 2019/10/03 14:21:43 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

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
            tab->h_map[x][y] = tab->map[x][y];
            y++;
        }
        x++;
    }
}

void print_array(int **array)
{
    int x = 0;
    int y = 0;

    while(x <= 1)
    {
        y = 0;
        while(y <= 2)
        {
            printf("|%d|", array[x][y]);
            y++;
        }
        printf("\n");
        x++;
    }
}
