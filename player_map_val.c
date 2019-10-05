/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_map_val.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:08:35 by sholiak           #+#    #+#             */
/*   Updated: 2019/10/04 19:18:55 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	player_val(t_table *tab, char *line)
{
	if (ft_strstr(line, "p1 : [players/sholiak.filler]"))
		tab->mp = 1;
	else if (ft_strstr(line, "p2 : [players/sholiak.filler]"))
		tab->mp = 2;
}

void	map_val(t_table *tab, char *line)
{
	if (ft_strstr(line, "Plateau 15 17:"))
	{
		tab->m_max_x = 15;
		tab->m_max_y = 17;
	}
	else if (ft_strstr(line, "Plateau 24 40:"))
	{
		tab->m_max_x = 24;
		tab->m_max_y = 40;
	}
	else if (ft_strstr(line, "Plateau 100 99:"))
	{
		tab->m_max_x = 100;
		tab->m_max_y = 99;
	}
	map_alloc(tab);
}

void	map_alloc(t_table *tab)
{
	int x;

	x = 0;
	tab->map = (int **)malloc(sizeof(int *) * tab->m_max_x);
	while (x < tab->m_max_x)
	{
		tab->map[x] = (int *)malloc(sizeof(int) * tab->m_max_y);
		x++;
	}
	x = 0;
	tab->h_map = (int **)malloc(sizeof(int *) * tab->m_max_x);
	while (x < tab->m_max_x)
	{
		tab->h_map[x] = (int *)malloc(sizeof(int) * tab->m_max_y);
		x++;
	}
}

void	map_fill(t_table *t, char *line)
{
	int x;
	int y;

	x = 0;
	while (x < t->m_max_x)
	{
		get_next_line(0, &line);
		y = 0;
		while (y < t->m_max_y)
		{
			if ((line[y + 4] == 'o' || line[y + 4] == 'O') && t->mp == 1)
				t->map[x][y] = 99;
			else if ((line[y + 4] == 'x' || line[y + 4] == 'X') && t->mp == 2)
				t->map[x][y] = 99;
			else if (line[y + 4] == 'x' || line[y + 4] == 'X' ||
			line[y + 4] == 'o' || line[y + 4] == 'O')
				t->map[x][y] = 0;
			else
				t->map[x][y] = 42;
			y++;
		}
		x++;
		ft_strdel(&line);
	}
}
