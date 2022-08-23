/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:36:09 by hkovac            #+#    #+#             */
/*   Updated: 2021/09/22 15:11:01 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < size)
		ft_memcpy(dst, src, srclen + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (srclen);
}
/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
	char *dest;
	dest = malloc(15);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	ft_putnbr_fd(ft_strlcpy(dest, "lorem", 15), 1);
	write(1, "\n", 1);
	puts(dest);
	return 0;
}
*/
