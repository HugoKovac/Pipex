/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 09:46:12 by hkovac            #+#    #+#             */
/*   Updated: 2021/12/28 14:31:36 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <stdio.h>
# include <sys/errno.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

typedef struct info
{
	char	**base_path;
	char	*path_cmd1;
	char	*path_cmd2;
	char	**cmd1;
	char	**cmd2;
	int		pid;
	int		pid2;
	int		status;
	int		fd1;
	int		fd2;
}	t_info;

char	*bs_path(char **env);
char	*f_path(char **base, char *cmd);
int		pipex(t_info *a, int fd1, int fd2, char **env);
int		ft_input(t_info *a, int fd_file, int fd_pipe, char **env);
int		ft_output(t_info *a, int fd_file, int fd_pipe, char **env);
int		ft_putstr(char *str, int fd);
int		ft_init(t_info *a, char **av, char **env);
int		ft_spec(void);
int		ft_strcmp(const char *s1, const char *s2);
void	free_tab(char **tab);
char	*ft_strcat(char *dest, char *src);
int		testnquit(char **free);

#endif