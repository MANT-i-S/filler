/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:07:53 by sholiak           #+#    #+#             */
/*   Updated: 2019/10/03 21:09:53 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int main(void)
{
    char *line;
    t_table *tab;

    line = NULL;
    tab = (t_table *)malloc(sizeof(t_table));
    get_next_line(0, &line);
    player_val(tab, line);
    get_next_line(0, &line);
    if(ft_strstr(line, "Plateau"))
        map_val(tab, line);
    while(get_next_line(0, &line) > 0)
    {
        tab->t_x = 0;
        tab->t_y = 0;
        tab->heat_el = 0;
        if(ft_strstr(line, "0123456789"))
        map_fill(tab, line);
        else if(ft_strstr(line, "Piece"))
        detect_size(tab, line);
        ft_strdel(&line);
    }
}