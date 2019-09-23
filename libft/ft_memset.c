/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 10:17:19 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/18 17:43:00 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char*)str;
	while (n > 0)
	{
		ptr[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (str);
}
