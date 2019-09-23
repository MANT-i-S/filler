/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 15:02:26 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/16 10:28:31 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	if (!s)
		return (NULL);
	i = 0;
	substr = ft_strnew(len);
	if (!substr)
		return (NULL);
	while (s[start] != '\0' && len > 0)
	{
		substr[i] = s[start];
		start++;
		len--;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
