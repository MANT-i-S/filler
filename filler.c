/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:07:53 by sholiak           #+#    #+#             */
/*   Updated: 2019/10/03 17:00:38 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int main(void)
{
    char *line;
    t_table *tab;

    line = NULL;
    tab = (t_table *)malloc(sizeof(t_table));
    player_val(tab, line);
    map_val(tab, line);
    while(42)
    {
        tab->t_x = 0;
        tab->t_y = 0;
        tab->heat_el = 0;
        map_fill(tab, line);
        detect_size(tab, line);
    }
}