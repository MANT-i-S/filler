/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 15:13:14 by sholiak           #+#    #+#             */
/*   Updated: 2019/08/29 19:48:55 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		n;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	n = 0;
	dest = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[n] = s1[i];
		i++;
		n++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		dest[n] = s2[i];
		i++;
		n++;
	}
	return (dest);
}
