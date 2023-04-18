/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:57:08 by ddias             #+#    #+#             */
/*   Updated: 2023/03/06 21:14:50 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			i;

	line = NULL;
	if (read(fd, 0, 0) < 0 || fd < 0 || BUFFER_SIZE <= 0)
	{
		i = 0;
		while (buffer[i])
			buffer[i++] = '\0';
		return (NULL);
	}
	while (*buffer || read(fd, buffer, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buffer);
		if (ft_tidy(buffer))
			break ;
	}
	return (line);
}

int	main(void)
{
	int		fd;
	int		fd2;
	char	*line;

	fd = open("example.txt", O_RDONLY);
	fd2 = open("hello.txt, ")
	while ((line = get_next_line(fd)) > 0)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
