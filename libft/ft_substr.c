/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:01:32 by hkovac            #+#    #+#             */
/*   Updated: 2021/11/23 17:46:27 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	len_str;

	if (!s)
		return (NULL);
	len_str = ft_strlen(s);
	if (len_str < start)
		return (ft_strdup(""));
	len_str = ft_strlen(s + start);
	if (len_str < len)
		len = len_str;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
/*
#include <stdlib.h>
#include <stdio.h>

int main ()
{
	printf("%s\n", ft_substr("jesuis", 18, 3));
	return (0);
}
*/