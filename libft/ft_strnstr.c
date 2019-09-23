/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:42:04 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/18 16:25:14 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *word, size_t len)
{
	size_t	i[2];
	char	*ptr;

	i[0] = 0;
	i[1] = 0;
	ptr = (char *)str;
	if (*word == '\0')
		return (ptr);
	while (str[i[0]] != '\0')
	{
		(str[i[0]] != word[i[1]]) ? i[0]++ : i[0];
		if (str[i[0]] == word[i[1]])
		{
			i[0]++;
			i[1]++;
		}
		if (word[i[1]] == '\0' && i[0] <= len)
			return (ptr + i[0] - i[1]);
		if (str[i[0]] != word[i[1]] && i[1] > 0)
		{
			i[0] = i[0] - i[1] + 1;
			i[1] = 0;
		}
	}
	return (NULL);
}
