/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:06:04 by sholiak           #+#    #+#             */
/*   Updated: 2019/10/04 18:34:05 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void detect_size(t_table *tab, char *line)
{
    int i;
    int j;
    char *digit;

    digit = ft_strnew(2);
    i = 0;
    j = 0;
    while(line[i] < '0' || line[i] > '9')
    i++;
    while(line[i] >= '0' && line[i] <= '9')
    digit[j++] = line[i++];
    digit[j] = '\0';
    tab->p_max_x = ft_atoi(digit);
    ft_bzero(digit, 3);
    i++;
    j = 0;
    while(line[i] >= '0' && line[i] <= '9')
    digit[j++] = line[i++];
    tab->p_max_y = ft_atoi(digit);
    free(digit);
    piece_alloc(tab);
    take_piece(tab, line);
}

void piece_alloc(t_table *tab)
{
    int x;

    x = 0;
    tab->f_piece = (int**)malloc(sizeof(int*) * tab->p_max_x);
    while(x < tab->p_max_x)
    {
        tab->f_piece[x] = (int*)malloc(sizeof(int) * tab->p_max_y);
        x++;
    }
}

void take_piece(t_table *tab, char *line)
{
    int i;
    int x;
    int y;

    i = 0;
    x = 0;
    while(x < tab->p_max_x)
    {
        get_next_line(0, &line);
        i = 0;
        y = 0;
        while(y < tab->p_max_y)
        {
            if(line[i] == '*')
                tab->f_piece[x][y] = -42;
            else 
                tab->f_piece[x][y] = 0;
            i++;
            y++;
        }
        x++;
        ft_strdel(&line);
    }
    heat_map(tab);
}

