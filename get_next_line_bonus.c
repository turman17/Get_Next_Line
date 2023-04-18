/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:20:45 by diogpere          #+#    #+#             */
/*   Updated: 2023/04/14 10:28:37 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	pointers[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			i;

	line = NULL;
	if (read(fd, 0, 0) < 0 || fd < 0 || BUFFER_SIZE <= 0)
	{
		i = 0;
		if (fd >= 0 && fd <= FOPEN_MAX)
			while (pointers[fd][i])
				pointers[fd][i++] = '\0';
		return (NULL);
	}
	while (pointers[fd][0] || read(fd, pointers[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, pointers[fd]);
		if (ft_tidy(pointers[fd]))
			break ;
	}
	return (line);
}
