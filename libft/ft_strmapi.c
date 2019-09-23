/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 14:28:43 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/16 12:42:19 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;
	int				n;

	if (!s || !f)
		return (NULL);
	i = 0;
	n = 0;
	ptr = (char *)s;
	ptr = ft_memalloc(ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[n] != '\0')
	{
		ptr[n] = f(i, s[n]);
		n++;
		i++;
	}
	ptr[n] = '\0';
	return (ptr);
}
