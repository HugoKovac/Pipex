/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 21:31:22 by hkovac            #+#    #+#             */
/*   Updated: 2021/09/08 08:53:04 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	int i = 0;
	while (i < 530)
	{
		if (ft_isalnum(i) != isalnum(i))
		{
			printf("%d\n", i);
			break ;
		}
		i++;
	}
	printf("nrm : %d\n", isalnum(i));
	printf("ft : %d\n", ft_isalnum(i));
}
*/
