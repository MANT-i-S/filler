/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:04:12 by sholiak           #+#    #+#             */
/*   Updated: 2019/10/04 17:54:42 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void    copy_map(t_table *tab)
{
    int x;
    int y;

    x = 0;
    while(x < tab->m_max_x)
    {
        y = 0;
        while(y < tab->m_max_y)
        {
            tab->h_map[x][y] = tab->map[x][y];
            y++;
        }
        x++;
    }
}

void total_zero(t_table *tab)
{
    tab->t_x = 0;
    tab->t_y = 0;
    tab->heat_el = 0;
    tab->p_max_x = 0;
    tab->p_max_y = 0;
    tab->t_total = 0;
    tab->min = 0;
    tab->f_x = 0;
    tab->f_y = 0;
}

void	del_piece(t_table *tab)
{
	int i;

	i = 0;
	while (i < tab->p_max_x)
		free(tab->f_piece[i++]);
	free(tab->f_piece);
}

void	del_maps(t_table *tab)
{
	int i;

	i = 0;
	while (i < tab->m_max_x)
		free(tab->map[i++]);
	free(tab->map);
	i = 0;
	while (i < tab->m_max_x)
		free(tab->h_map[i++]);
	free(tab->h_map);
	free(tab);
}

char		*find_line(char *key)
{
	char *str;

	while (get_next_line(0, &str) > 0)
	{
		if (ft_strstr(str, key))
			break ;
		ft_strdel(&str);
	}
	return (str);
}

void print_array(t_table *tab, int **array)
{
    int x = 0;
    int y = 0;

    while(x < tab->m_max_x)
    {
        y = 0;
        while(y < tab->m_max_y)
        {
            printf("|%d|", array[x][y]);
            y++;
        }
        printf("\n");
        x++;
    }
}


void print_piece_stderr(t_table *tab, int **array)
{
    int x = 0;
    int y = 0;

    while(x < tab->p_max_x)
    {
        y = 0;
        while(y < tab->p_max_y)
        {
            fprintf(stderr, "|%d|", array[x][y]);
            y++;
        }
        fprintf(stderr, "\n");
        x++;
    }
}