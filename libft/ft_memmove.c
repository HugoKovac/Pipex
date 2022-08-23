/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:59:15 by hkovac            #+#    #+#             */
/*   Updated: 2021/10/22 20:21:09 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!(src || dest))
		return (dest);
	if (d < s && (dest || src))
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char str1[50];
	char str2[50] = "Je suis Hugo";
	char *ret;

	ret = ft_memmove(str1, str2, 11);
	printf("%s", ret);
	return (0);
}
*/
