/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrevcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:11:40 by sholiak           #+#    #+#             */
/*   Updated: 2019/06/03 22:26:38 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrot(char *str)
{
	int		i;
	int		len;
	char	temp;

	i = 0;
	len = ft_strlen(str);
	len--;
	while (len > i)
	{
		temp = str[len];
		str[len] = str[i];
		str[i] = temp;
		i++;
		len--;
	}
	return (str);
}
