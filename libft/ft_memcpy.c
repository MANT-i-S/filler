/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:48:33 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/07 14:07:06 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*ptr;
	char	*ptrdst;

	ptrdst = dest;
	ptr = (char *)src;
	i = 0;
	while (n > 0)
	{
		ptrdst[i] = ptr[i];
		i++;
		n--;
	}
	return (dest);
}
