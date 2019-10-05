/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heat_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 14:52:15 by sholiak           #+#    #+#             */
/*   Updated: 2019/10/04 18:47:54 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	heat_map(t_table *tab)
{
	copy_map(tab);
	heating_map(tab);
	make_move(tab);
}

void	heating_map(t_table *tab)
{
	int x;
	int y;

	while (tab->heat_el <= 42)
	{
		x = 0;
		while (x < tab->m_max_x)
		{
			y = 0;
			while (y < tab->m_max_y)
			{
				if (tab->h_map[x][y] == tab->heat_el)
					heat_this_piece(tab, x, y);
				y++;
			}
			x++;
		}
		tab->heat_el++;
	}
}

void	heat_this_piece(t_table *tab, int x, int y)
{
	if (x > 0 && y > 0 && y < tab->m_max_y - 1)
	{
		if (tab->h_map[x - 1][y - 1] == 42)
			tab->h_map[x - 1][y - 1] = tab->heat_el + 1;
		if (tab->h_map[x - 1][y] == 42)
			tab->h_map[x - 1][y] = tab->heat_el + 1;
		if (tab->h_map[x - 1][y + 1] == 42)
			tab->h_map[x - 1][y + 1] = tab->heat_el + 1;
	}
	if (x < tab->m_max_x - 1 && y > 0 && y < tab->m_max_y - 1)
	{
		if (tab->h_map[x + 1][y + 1] == 42)
			tab->h_map[x + 1][y + 1] = tab->heat_el + 1;
		if (tab->h_map[x + 1][y] == 42)
			tab->h_map[x + 1][y] = tab->heat_el + 1;
		if (tab->h_map[x + 1][y - 1] == 42)
			tab->h_map[x + 1][y - 1] = tab->heat_el + 1;
	}
	if (y > 0 && y < tab->m_max_y - 1)
	{
		if (tab->h_map[x][y + 1] == 42)
			tab->h_map[x][y + 1] = tab->heat_el + 1;
		if (tab->h_map[x][y - 1] == 42)
			tab->h_map[x][y - 1] = tab->heat_el + 1;
	}
}
