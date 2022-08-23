/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:06:11 by hkovac            #+#    #+#             */
/*   Updated: 2021/10/22 20:11:21 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1 = s1;
	const unsigned char	*str2 = s2;

	while (n--)
		if (*(str1++) != *(str2++))
			return ((int)(*(str1 - 1) - *(str2 - 1)));
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
        char str[50];
        char str2[50];
        strcpy(str, "This is string.h library functioc");
        strcpy(str2, "This is string.h library function");
        puts(str);
        puts(str2);
        printf("ft : %i\n", ft_memcmp(str, str2, 35));
        printf("nrm : %i\n", memcmp(str, str2, 35));
        return (0);
}
*/
