/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:12:23 by hkovac            #+#    #+#             */
/*   Updated: 2021/11/23 15:10:36 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
#include <unistd.h>
void ft_putstr(unsigned int i, char *s)
{
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(void)
{
	char *str = "hello";

	ft_striteri(str, &ft_putstr);
	return (0);
}
*/
