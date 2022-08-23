/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:50:14 by hkovac            #+#    #+#             */
/*   Updated: 2021/09/08 09:27:38 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("%ld\n", ft_strlen(av[1]));
	printf("%ld\n", strlen(av[1]));
	return 0;
}
*/
