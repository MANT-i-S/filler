/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 15:42:32 by sholiak           #+#    #+#             */
/*   Updated: 2019/05/18 16:33:47 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;
	t_list *temp;
	t_list *link;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	newlist = ft_lstnew(temp->content, temp->content_size);
	if (!newlist)
		return (NULL);
	link = newlist;
	lst = lst->next;
	while (lst)
	{
		temp = f(lst);
		newlist->next = ft_lstnew(temp->content, temp->content_size);
		if (!newlist)
			return (NULL);
		newlist = newlist->next;
		lst = lst->next;
	}
	return (link);
}
