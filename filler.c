/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:07:53 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/29 16:48:34 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int main(void)
{
    char *line;
    t_table *tab;

    line = NULL;
    tab = (t_table *)malloc(sizeof(t_table));
    if(tab->myplayer == 0)
        player_val(tab, line);
    while(42)
    {
        tab->good = 0;
        tab->f_x = 0;
        tab->f_y = 0;
        map_val(tab, line);
        detect_size(tab, line);
    }
}