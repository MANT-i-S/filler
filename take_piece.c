/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:06:04 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/27 15:30:49 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void take_piece(t_table *tab, char *line)
{
    int i;
    int x;
    int y;

    i = 0;
    x = 0;
    if(ft_strstr(line, "Piece"))
    {
        while(get_next_line(0, &line) && !ft_strstr(line, "<got"))
        {
            i = 0;
            y = 0;
            while(line[i])
            {
                if(line[i] == '*')
                    tab->full_piece[x][y] = 8;
                else if(line[i] == '.')
                    tab->full_piece[x][y] = 1;
                i++;
                y++;
            }
            x++;
        }
    }
}

