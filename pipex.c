/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 09:46:05 by hkovac            #+#    #+#             */
/*   Updated: 2021/12/28 13:19:32 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*bs_path(char **env)
{
	int		i;

	i = 0;
	while (env[i] && !ft_strstr(env[i], "PATH="))
		i++;
	if (!env[i])
		return (NULL);
	return (ft_strdup(*(env + i) + 5));
}

char	*f_path(char **base, char *cmd)
{
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	while (access(str, X_OK) == -1 && base[i])
	{
		str = ft_strjoin(base[i], "/");
		str = ft_strjoin(str, cmd);
		i++;
	}
	if (access(str, X_OK) == -1)
	{
		free (str);
		return (NULL);
	}
	return (str);
}

int	ft_input(t_info *a, int fd_file, int fd_pipe, char **env)
{
	if (dup2(fd_file, STDIN_FILENO) == -1)
		ft_putstr(strerror(errno), 2);
	close(fd_file);
	if (dup2(fd_pipe, STDOUT_FILENO) == -1)
		ft_putstr(strerror(errno), 2);
	close (fd_pipe);
	if (execve(a->path_cmd1, a->cmd1, env) == -1)
		ft_putstr(strerror(errno), 2);
	return (1);
}

int	ft_output(t_info *a, int fd_file, int fd_pipe, char **env)
{	
	if (dup2(fd_pipe, STDIN_FILENO) == -1)
		ft_putstr(strerror(errno), 2);
	close(fd_pipe);
	if (dup2(fd_file, STDOUT_FILENO) == -1)
		ft_putstr(strerror(errno), 2);
	close (fd_file);
	if (execve(a->path_cmd2, a->cmd2, env) == -1)
		ft_putstr(strerror(errno), 2);
	return (1);
}

int	pipex(t_info *a, int fd1, int fd2, char **env)
{
	int	pipe_fd[2];

	if (fd1 == -1)
		return (0);
	if (pipe(pipe_fd) == -1)
		ft_putstr_fd(strerror(errno), 2);
	a->pid = fork();
	if (a->pid < 0)
		return (0);
	if (a->pid == 0)
	{
		close(pipe_fd[0]);
		exit(ft_input(a, fd1, pipe_fd[1], env));
	}
	else
	{
		a->pid2 = fork();
		if (a->pid2 == 0)
		{
			close(pipe_fd[1]);
			waitpid(a->pid, &a->status, WNOHANG);
			exit (ft_output(a, fd2, pipe_fd[0], env));
		}
	}
	return (1);
}
