/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:19:03 by hkovac            #+#    #+#             */
/*   Updated: 2021/10/25 20:12:56 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	add;
	char			*result;

	if (!s1 && !s2)
		return (NULL);
	else if (!(s1) || !(s2))
	{
		if (!s1)
			return (ft_strdup(s2));
		else
			return (ft_strdup(s1));
	}
	add = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof (char) * (add + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, ft_strlen(s1));
	ft_memcpy(result + ft_strlen(s1), s2, ft_strlen(s2));
	*(result + add) = 0;
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	char *ntm;
	ntm = ft_strjoin("lorem ipsum", "dolor sit amet");
	printf("%s\n", ntm);
	free(ntm);
	return (0);
}
*/
