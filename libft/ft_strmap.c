/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 14:16:14 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/16 10:23:19 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	ptr = (char *)s;
	ptr = ft_memalloc(ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = f(s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
