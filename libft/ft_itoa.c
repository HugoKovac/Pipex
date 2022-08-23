/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:07:14 by hkovac            #+#    #+#             */
/*   Updated: 2021/11/24 11:35:12 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	convert(char *str, int n, int i)
{
	long	nb;

	nb = n;
	i--;
	if (nb < 0)
		nb = -nb;
	if (nb == 0)
		str[0] = '0';
	while (nb)
	{
		str[i] = (nb % 10) + '0';
		i--;
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	nb;
	int		i;
	char	*str;

	nb = n;
	i = 0;
	if (nb <= 0)
		i++;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	str = malloc(sizeof (char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = 0;
	if (n < 0)
		str[0] = '-';
	convert(str, n, i);
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *str = ft_itoa(-2147483648);
	printf("%s", str);
	free(str);
	return 0;
}
*/
