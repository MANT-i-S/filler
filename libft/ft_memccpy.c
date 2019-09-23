/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:13:34 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/09 17:51:52 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;
	unsigned char	*ptrdst;

	i = 0;
	ptr = (unsigned char *)src;
	ptrdst = (unsigned char *)dest;
	while (n > 0)
	{
		ptrdst[i] = ptr[i];
		if (ptr[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
		n--;
	}
	return (NULL);
}
