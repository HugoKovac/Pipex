/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:58:27 by hkovac            #+#    #+#             */
/*   Updated: 2021/09/08 10:11:48 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cast;

	cast = s;
	while (n-- > 0)
		*cast++ = '\0';
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
        char str[50];
        char str2[50];
        strcpy(str, "This is string.h library function");
        strcpy(str2, "This is string.h library function");
        puts(str);
        ft_bzero(str, 1);
        bzero(str2, 1);
        puts(str+1);
        puts(str2+1);
        return (0);
}
*/
