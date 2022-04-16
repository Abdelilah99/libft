/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoury <anoury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 05:58:30 by anoury            #+#    #+#             */
/*   Updated: 2022/04/13 06:01:33 by anoury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*orig;
	t_list	*newlist;

	newlist = NULL;
	orig = lst;
	while (orig)
	{
		newnode = ft_lstnew(f(orig->content));
		if (newnode)
			ft_lstadd_back(&newlist, newnode);
		else
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		orig = orig->next;
	}
	return (newlist);
}
