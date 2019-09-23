/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 09:43:26 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/13 21:27:49 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *dest;

	dest = (char*)malloc(sizeof(*dest) * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, size);
	return (dest);
}
