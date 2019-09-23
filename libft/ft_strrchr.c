/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 16:13:10 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/18 20:59:41 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (str[i] != '\0')
		i++;
	while (str[i] != c && i != 0)
		i--;
	if (str[i] == c)
		return (ptr + i);
	else
		return (NULL);
}
