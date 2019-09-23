/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 10:41:58 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/19 12:24:02 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_wordcount(char const *s, char c)
{
	int i;
	int n;
	int check;

	i = 0;
	n = 0;
	check = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			check++;
		}
		while (s[i] == c)
			i++;
		if (check)
			n++;
	}
	return (n);
}
