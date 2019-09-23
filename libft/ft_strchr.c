/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 16:05:45 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/16 12:41:47 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		if (str[i] == c)
			return (ptr + i);
	}
	if (str[i] != '\0')
		return (ptr + i);
	else
		return (NULL);
}
