/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:02:21 by hkovac            #+#    #+#             */
/*   Updated: 2021/11/24 12:18:34 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	new_list = ft_lstnew(f(temp->content));
	if (!new_list)
		return (NULL);
	temp = temp->next;
	while (temp)
	{
		new_element = ft_lstnew(f(temp->content));
		if (!new_element)
		{
			ft_lstclear(&new_element, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		temp = temp->next;
	}
	return (new_list);
}
/*
new
elem

new = ft_tempnew(f(temp->content))
temp = temp -> next;

while (temp)
{
	elem = ft_tempnew
	if (!elem)
		...
	ft_tempadd_back(new, elem);
	temp = temp->next
}
return (new);
*/