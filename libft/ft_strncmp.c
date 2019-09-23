/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 12:12:39 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/18 21:55:47 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
		if (n == 0)
			return (0);
		else if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		else if (*s1 == '\0')
			return (0);
	}
	if (n == 0)
		return (0);
	else if (*s1 != *s2)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	else if (*s1 == '\0')
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
