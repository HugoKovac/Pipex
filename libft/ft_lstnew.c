/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:46:41 by hkovac            #+#    #+#             */
/*   Updated: 2021/09/21 11:56:10 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr_lst;

	ptr_lst = malloc(sizeof (*ptr_lst));
	if (!ptr_lst)
		return (NULL);
	ptr_lst->content = content;
	ptr_lst->next = NULL;
	return (ptr_lst);
}
