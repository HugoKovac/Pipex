/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:16:02 by hkovac            #+#    #+#             */
/*   Updated: 2021/11/24 17:51:08 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s)
	{
		if ((int)*(s) == c)
			return ((char *)s);
		s++;
	}
	if (*s == 0 && (int)*s == c)
		return ((char *)s);
	return ((char *)0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	printf(" ft : %s\n", ft_strchr("bonjour", 'o'));
	printf("nrm : %s\n", strchr("bonjour", 'o'));
	return 0;
}
*/