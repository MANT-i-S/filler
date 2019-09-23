/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:53:52 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/09 14:34:07 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	while (src[c] != '\0' && n > 0)
	{
		dest[i + c] = src[c];
		c++;
		n--;
	}
	dest[i + c] = '\0';
	return (dest);
}
