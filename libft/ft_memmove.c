/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:22:22 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/10 13:00:15 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptrdst;

	ptrdst = dest;
	ptr = (char *)src;
	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			ptrdst[n - 1] = ptr[n - 1];
			n--;
		}
	}
	else
		while (n > 0)
		{
			ptrdst[i] = ptr[i];
			i++;
			n--;
		}
	return (dest);
}
