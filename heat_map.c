/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heat_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 14:52:15 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/30 14:41:37 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void heat_map_1(t_table *tab)
{
    copy_map(tab);
    print_array(tab);
}

void heating_map_1(t_table *tab)
{
    int x;
    int y;

    while(tab->h_x <= 14)
    {
        x = tab->h_x;
        y = tab->h_y;
        while(y <= )
        {
            tab->heat_el[x][y]
            y++;
        }
        tab->h_x++;
        tab->h_y = 0;
    }
}

void piece_of_heat(t_table *tab, int x, int y)
