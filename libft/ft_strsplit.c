/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 10:39:30 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/19 12:26:04 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		start;
	int		wordnum;
	int		w;
	char	**dest;

	if (!s)
		return (NULL);
	i = 0;
	w = 0;
	wordnum = ft_wordcount(s, c);
	dest = (char**)malloc(sizeof(char*) * (wordnum) + 1);
	if (!dest)
		return (NULL);
	while (w != wordnum)
	{
		start = ft_findstart(s, c, i);
		dest[w] = ft_strsub(s, start, ft_findlen(s, c, start));
		i = start + ft_findlen(s, c, start);
		w++;
	}
	dest[w] = NULL;
	return (dest);
}
