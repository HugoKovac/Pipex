/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:03:20 by hkovac            #+#    #+#             */
/*   Updated: 2021/10/22 20:10:54 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, size * nmemb);
	return ((void *)tab);
}
/*
#include <stdio.h>
int main()
{
	char *str;
	str = (char *)ft_calloc(30, 1);
	if (!str)
		printf("fail");
	else
		printf("sucess");
}
*/
