/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:38:31 by hkovac            #+#    #+#             */
/*   Updated: 2021/11/23 15:09:50 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>
char test_char(unsigned int i, char c) {
    printf("%i => %c\n", i, c);
    return '0' + i;
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof (char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, *(s + i));
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *test = "Zizi";
	ft_strmapi(test, &test_char);
	printf("%s", test);
	return 0;
}
*/
