/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:06:04 by sholiak           #+#    #+#             */
/*   Updated: 2019/09/29 20:31:36 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void detect_size(t_table *tab, char *line)
{
    int i;
    int j;
    char *digit;

    get_next_line(0, &line);
    digit = malloc(sizeof(char) * 3);
    i = 0;
    j = 0;
    while(line[i] < '0' || line[i] > '9')
    i++;
    while(line[i] >= '0' && line[i] <= '9')
    digit[j++] = line[i++];
    digit[j] = '\0';
    tab->piece_max_x = ft_atoi(digit);
    ft_bzero(digit, 3);
    i++;
    j = 0;
    while(line[i] >= '0' && line[i] <= '9')
    digit[j++] = line[i++];
    tab->piece_max_y = ft_atoi(digit);
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
    ft_bzero(tab->full_piece, sizeof(tab->full_piece));
    while(x < tab->piece_max_x)
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
    heat_map_1(tab);
    //make_move(tab);
}

