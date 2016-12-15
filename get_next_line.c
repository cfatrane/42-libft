/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:51:49 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/30 12:01:58 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char *save, char **line)
{
	char	*fin;

	fin = ft_strchr(save, '\n');
	if (fin != NULL)
	{
		*fin = '\0';
		*line = ft_strdup(save);
		ft_strncpy(save, &fin[1], ft_strlen(&fin[1]) + 1);
		return (1);
	}
	else if (ft_strlen(save) > 0)
	{
		*line = ft_strdup(save);
		*save = '\0';
		return (1);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*save = NULL;
	char		*tmp;
	int			ret;

	if (!(save))
		save = ft_strnew(0);
	if (fd == -1 || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	while (!(ft_strchr(save, '\n')))
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == -1)
			return (-1);
		if (ret == 0)
			return (ft_check(save, line));
		buf[ret] = '\0';
		tmp = ft_strjoin(save, buf);
		free(save);
		save = tmp;
	}
	return (ft_check(save, line));
}
