/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:43:19 by hkovac            #+#    #+#             */
/*   Updated: 2021/11/24 10:46:18 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	start = 0;
	while (ft_check(s1[start], set) && s1[start])
		start++;
	end = ft_strlen(s1);
	while (ft_check(s1[end - 1], set) && (end > start))
		end--;
	str = malloc(sizeof (*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strtrim("   ", " "));
	return 0;
}
*/