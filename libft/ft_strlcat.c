/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 13:50:22 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/12 17:16:01 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	n;

	n = 0;
	while (dest[n] && n < len)
		n++;
	i = n;
	while (src[n - i] && n + 1 < len)
	{
		dest[n] = src[n - i];
		n++;
	}
	if (i < len)
		dest[n] = '\0';
	return (i + ft_strlen(src));
}
