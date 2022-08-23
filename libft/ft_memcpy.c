/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:01:03 by hkovac            #+#    #+#             */
/*   Updated: 2021/09/09 14:00:04 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cast_dest;
	char	*cast_src;

	cast_src = (char *)src;
	cast_dest = (char *)dest;
	while (n--)
	{
		if (cast_dest || cast_src)
			*cast_dest++ = *cast_src++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	
	//char src[50] = "je";
	//char dest[50];
	//char dest2[50];
	//char *ret2;
	//char *ret;
	
	char *src = NULL;
	char *dest = NULL;
	char *dest2 = NULL;
	char *ret2;
	char *ret;

	ret2 = ft_memcpy(dest, src, NULL);
	printf("ft : %s\n", ret2);
	ret = ft_memcpy(dest, src, NULL);
	printf("nrm : %s\n", ret);
	return (0);
}
*/
