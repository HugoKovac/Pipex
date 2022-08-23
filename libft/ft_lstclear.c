/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:34:24 by hkovac            #+#    #+#             */
/*   Updated: 2021/11/24 12:23:04 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*cpy_next;

	current = *lst;
	while (current)
	{
		cpy_next = current->next;
		del(current->content);
		free(current);
		current = cpy_next;
	}
	*lst = NULL;
}
