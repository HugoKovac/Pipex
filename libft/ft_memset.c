/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:52:41 by hkovac            #+#    #+#             */
/*   Updated: 2021/09/26 16:11:33 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	if (!s || !n)
		return (s);
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[50];
	char str2[50];
	strcpy(str, "jjjjjjjjjjjjjj");
	strcpy(str2, "jjjjjjjjjjjjjj");
	printf("inp : %s\n", str);
	ft_memset(str, '\0', 1);
	memset(str2, '\0', 1);
	printf(" ft : %s\n", str);
	printf("nrm : %s\n", str2);
	return (0);
}
*/