/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:09:42 by hkovac            #+#    #+#             */
/*   Updated: 2021/11/24 16:27:11 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
		if (*(const char *)s++ == c)
			return ((void *)s - 1);
	return ((void *)0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};

	printf("ft : %s\n", (char *)ft_memchr(tab, , 3));
	printf("nrm : %s\n", (char *)memchr(tab, , 3));
	return (0);
}
*/
