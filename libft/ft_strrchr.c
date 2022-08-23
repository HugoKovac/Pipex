/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:23:25 by hkovac            #+#    #+#             */
/*   Updated: 2021/10/22 20:12:04 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
		if (*(s++) == c)
			while (s)
				if (!*(s++))
					while (s--)
						if (*s == c)
							return ((char *)s);
	if (c == 0)
		return ((char *)s);
	return ((char *)0);
}
/*
#include <stdio.h>
int main()
{
        printf("%s\n", ft_strrchr("Jesuisfd", 's'));
        return 0;
}
*/
