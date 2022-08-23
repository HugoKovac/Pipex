/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:13:30 by hkovac            #+#    #+#             */
/*   Updated: 2021/12/27 11:21:12 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	long	result;
	int		signe;

	result = 0;
	signe = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signe = -signe;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (result * 10 + (*nptr - 0) > 2147483647)
			return (-1);
		if (result * 10 + (*nptr - 0) < -2147483648)
			return (-2);
		result = result * 10 + (*nptr++ - '0');
	}
	return (signe * result);
}
/*
#include <stdio.h>
int main()
{
	printf("%i\n", ft_atoi("-2147483648"));
	return 0;
}
*/