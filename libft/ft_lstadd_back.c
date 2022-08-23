/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:17:06 by hkovac            #+#    #+#             */
/*   Updated: 2021/11/24 12:21:04 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!*alst)
		*alst = new;
	else
	{
		temp = ft_lstlast(*alst);
		temp->next = new;
	}
}
/*
#include <stdio.h>
int main()
{
	t_list *list;
	t_list *list2;
	char *str = "abc";
	char *str2 = "def";
	list = malloc(sizeof (list));
	list2 = malloc(sizeof (list2));
	list->content = str;
	list2->content = str2;
	ft_lstadd_back(&list, list2);
	list = list->next;
	printf("%s\n", list->content);
	return 0;
}
*/