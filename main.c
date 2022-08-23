/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 09:46:22 by hkovac            #+#    #+#             */
/*   Updated: 2021/12/28 14:35:15 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	testnquit(char **free)
{
	free_tab(free);
	return (0);
}

int	freenrtn(char **free1, char **free2, char **free3, int rtn)
{
	if (free1)
		free_tab(free1);
	if (free2)
		free_tab(free2);
	if (free3)
		free_tab(free3);
	return (rtn);
}

int	main(int ac, char **av, char **env)
{
	t_info	a;

	if (ac != 5)
		return (1);
	if (!ft_init(&a, av, env))
		return (4);
	if (ft_strcmp(av[1], "/dev/stdin") != 0)
		a.fd1 = open(av[1], O_RDONLY);
	else
	{
		a.fd1 = ft_spec();
		if (a.fd1 == -1)
			return (2);
	}
	if (access(av[4], R_OK) == 0)
		unlink(av[4]);
	a.fd2 = open(av[4], O_APPEND | O_WRONLY | O_CREAT, 0644);
	if (a.fd1 == -1 || a.fd2 == -1)
	{
		ft_putstr(strerror(errno), 2);
		return (5);
	}
	if (!pipex(&a, a.fd1, a.fd2, env))
		return (6);
	return (freenrtn(a.cmd1, a.cmd2, a.base_path, 0));
}
