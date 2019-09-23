/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 17:56:18 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/16 12:39:00 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (n > 0)
	{
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
		i++;
		n--;
	}
	return (NULL);
}
