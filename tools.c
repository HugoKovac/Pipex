/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:40:52 by hkovac            #+#    #+#             */
/*   Updated: 2021/12/28 14:32:47 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	ft_init(t_info *a, char **av, char **env)
{
	char	*tmp;

	tmp = bs_path(env);
	a->base_path = ft_split(tmp, ':');
	free(tmp);
	a->cmd1 = ft_split(av[2], ' ');
	a->cmd2 = ft_split(av[3], ' ');
	if (!a->cmd1 && !a->cmd2)
		return (0);
	if (!a->cmd1)
		return (testnquit(a->cmd2));
	if (!a->cmd2)
		return (testnquit(a->cmd1));
	a->path_cmd1 = f_path(a->base_path, a->cmd1[0]);
	a->path_cmd2 = f_path(a->base_path, a->cmd2[0]);
	if (!a->cmd1 && !a->cmd2)
		return (0);
	if (!a->cmd1)
		return (testnquit(a->cmd2));
	if (!a->cmd2)
		return (testnquit(a->cmd1));
	return (1);
}

int	ft_putstr(char *str, int fd)
{
	if (!str || !fd)
		return (0);
	while (*str)
		write (fd, str++, 1);
	if (fd == 2)
		write (fd, "\n", 1);
	return (1);
}

int	ft_spec(void)
{
	int		pipe_fd2[2];
	int		r_rtn;
	char	c;

	r_rtn = 1;
	pipe(pipe_fd2);
	if (pipe(pipe_fd2) == -1)
		ft_putstr_fd(strerror(errno), 2);
	while (r_rtn != 0)
	{
		r_rtn = read(1, &c, 1);
		if (r_rtn == -1)
		{
			ft_putstr(strerror(errno), 2);
			return (-1);
		}
		write(pipe_fd2[1], &c, 1);
	}
	close (pipe_fd2[1]);
	return (pipe_fd2[0]);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;

	i = 0;
	while (((unsigned char)s1[i] || (unsigned char)s2[i]))
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
