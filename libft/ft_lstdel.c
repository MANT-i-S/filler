/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 20:04:59 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/18 16:29:44 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;
	t_list *nextlist;

	list = *alst;
	while (list)
	{
		nextlist = list->next;
		del(((list)->content), list->content_size);
		free(list);
		list = nextlist;
	}
	*alst = NULL;
}
