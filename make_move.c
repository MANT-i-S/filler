/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 15:44:40 by sholiak           #+#    #+#             */
/*   Updated: 2019/10/03 14:32:16 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void print_move(t_table *tab)
{
    ft_putnbr(tab->f_x);
    ft_putchar(' ');
    ft_putnbr(tab->f_y);
    ft_putchar('\n');
}

void make_move(t_table *tab)
{
    tab->min = 4200;

    while(tab->t_x < tab->m_max_x && tab->t_y < tab->m_max_y)
    {   
        if(try_piece(tab, tab->t_x, tab->t_y))
        {
            count_move(tab, tab->t_x, tab->t_y);
            if(tab->min > tab->t_total)
            {
                tab->min = tab->t_total; 
                tab->f_x = tab->t_x;
                tab->f_y = tab->t_y;
            }
        }
        if(tab->t_y >= tab->m_max_y - 1)
        {
        tab->t_x++;
        tab->t_y = 0;
        }
        if(tab->t_y < tab->m_max_y - 1)
            tab->t_y++;
    }
    print_move(tab);
}

int try_piece(t_table *tab, int x, int y)
{
    int i;
    int j;
    int touch;

    j = 0;
    touch = 0;
    while (x + tab->p_max_x <= tab->m_max_x && j < tab->p_max_x)
    {
        i = 0;
        y = tab->t_y;
        while (y + tab->p_max_y <= tab->m_max_y && i < tab->p_max_y)
        {
            if (tab->h_map[x][y] == 0 && tab->f_piece[j][i] == -42)
                return (0);
            else if (tab->h_map[x][y] == 99 && tab->f_piece[j][i] == -42)
                touch++;
            i++;
            y++;
        }
        j++;
        x++;
    }
    if(touch == 1)
    return(1);
    return(0);
}

void count_move(t_table *tab, int x, int y)
{
    int i;
    int j;

    j = 0;
    tab->t_total = 0;
    while (x + tab->p_max_x <= tab->m_max_x && j < tab->p_max_x)
    {
        i = 0;
        y = tab->t_y;
        while (y + tab->p_max_y <= tab->m_max_y && i < tab->p_max_y)
        {
            if (tab->f_piece[j][i] == -42)
            tab->t_total += tab->h_map[x][y];
            i++;
            y++;
        }
        x++;
    }
}