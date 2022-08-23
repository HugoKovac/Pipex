/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:39:20 by hkovac            #+#    #+#             */
/*   Updated: 2021/11/24 17:58:09 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbstr(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (i == 0)
			i++;
		else if (*(s - 1) == c && *(s++) != c)
			i++;
		s++;
	}
	return (i + 1);
}

char	*mall(char const *s, char c)
{
	char	*new;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	return (new);
}

char	**ft_tmp(char const *s, char c, char **tab, int i)
{
	int	j;

	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		tab[i] = mall(s, c);
		if (!tab)
			return (NULL);
		j = 0;
		while (*s != c && *s)
			tab[i][j++] = *(s++);
		tab[i][j] = 0;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof (char *) * nbstr(s, c));
	if (!tab)
		return (NULL);
	return (ft_tmp(s, c, tab, 0));
}

// #include <stdio.h>
// int main()
// {
// 	char **tab;
// 	tab = ft_split("   lorem  ", ' ');
// 	printf("%s\n", tab[0]);
// 	printf("%s\n", tab[1]);
// 	printf("%s\n", tab[2]);
// 	printf("%s\n", tab[3]);
// 	printf("%s\n", tab[4]);
// 	printf("%s\n", tab[5]);
// 	printf("%s\n", tab[6]);
// 	printf("%s\n", tab[7]);
// 	printf("%s\n", tab[8]);
// 	printf("%s\n", tab[9]);
// 	printf("%s\n", tab[10]);
// 	printf("%s\n", tab[11]);
// 	printf("%s\n", tab[12]);
// }