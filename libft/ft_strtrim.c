/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 15:22:01 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/16 12:59:57 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		n;
	int		j;
	char	*dest;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	n = ft_countwspc(s);
	if (n == 0)
		return (ft_strdup(s));
	dest = ft_strnew(i - n);
	if (!dest)
		return (NULL);
	i = 0;
	while ((s[i] > 8 && s[i] < 14) || s[i] == 32)
	{
		n--;
		i++;
	}
	j = 0;
	while (s[i + n] != '\0')
		dest[j++] = s[i++];
	dest[j] = '\0';
	return (dest);
}
