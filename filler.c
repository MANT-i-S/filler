/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:07:53 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/28 15:49:00 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int main(void)
{
    char *line;
    t_table *tab;

    line = NULL;
    while(42)
    {
        tab = (t_table *)malloc(sizeof(t_table));
        if(tab->myplayer == 0)
        player_val(tab, line);
        if(tab->map_size == 0)
        map_val(tab, line);
        if(tab->piece_max_x == 0)
        detect_size(tab, line);
        free(tab);
    }
}