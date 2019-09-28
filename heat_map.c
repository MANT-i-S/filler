/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heat_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 14:52:15 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/27 19:51:27 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void heat_map_1(t_table *tab)
{
    int x;
    int y;
    int min;

    x = 0;
    min = 1;
    while(x <= 16)
    {
        while(y <= 14)
        {
            if(tab->map1[x][y] == -2)
            {
                y++;
                while(tab->map1[x][y] != min)
                {
                    tab->map1[x][y] = min;
                    y++;
                    min++;
                }
            }
            else
                y++;
        }
        x++;
    }
}