/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 21:12:18 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/15 12:29:17 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*dest;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	dest = ft_strnew(ft_intcount(n));
	if (!dest)
		return (NULL);
	dest = ft_itoarev(n, dest);
	dest = ft_strrot(dest);
	return (dest);
}
