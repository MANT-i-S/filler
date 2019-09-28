/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:06:04 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/27 21:18:38 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void detect_size(t_table *tab, char *line)
{
    int i;
    int j;
    char *digit;

    digit = malloc(sizeof(char) * 3);
    i = 0;
    j = 0;
    while(line[i] < '0' || line[i] > '9')
    i++;
    while(line[i] >= '0' && line[i] <= '9')
    digit[j++] = line[i++];
    digit[j] = '\0';
    tab->piece_max = ft_atoi(digit);
    free(digit);
    take_piece(tab, line);
}

void take_piece(t_table *tab, char *line)
{
    int i;
    int x;
    int y;

    i = 0;
    x = 0;
    while(x < tab->piece_max)
    {
        get_next_line(0, &line);
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
    make_move(tab);
}

