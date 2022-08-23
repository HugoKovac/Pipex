/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:43:37 by hkovac            #+#    #+#             */
/*   Updated: 2021/12/21 15:58:25 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*tab;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	tab = malloc(sizeof(*s) * (i + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
#include <stdio.h>
int main(void)
{
	char *str;
	char *test;

	str = "hKovac";
	printf("Avant Allocation: %s\n", str);
	printf("Apres  Allocation: \n");
	test = ft_strdup(str);
	printf("%s\n", test);
	free(test);
	return (0);
}
*/
