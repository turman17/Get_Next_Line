/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtryason <vtryason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:15:49 by vtryason          #+#    #+#             */
/*   Updated: 2023/04/18 15:21:22 by vtryason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		buf[1000 + 1];
	int			byte_was_read;
	char		*line;
	char		*p_n;
	int			flag;
	static char	*reaminder;

	flag = 1;
	if (reaminder)
		line = ft_strdup(reaminder);
	else
		line = ft_strnew(1);
	while (flag && (byte_was_read = read(fd, buf, 10)))
	{
		buf[byte_was_read] = '\0';
		if ((p_n = ft_strchr(buf, '\n')))
		{
			*p_n = '\0';
			flag = 0;
			p_n++;
			reaminder = ft_strdup(p_n);
		}
		line = ft_strjoin(line, buf);
	}
	return (line);
}

// int	main(void)
// {
// 	char	*line;
// 	int		fd;

// 	fd = open("test.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("%s\n\n", line);
// 	line = get_next_line(fd);
// 	printf("%s\n", line);
// 	line = get_next_line(fd);
// 	printf("%s\n\n", line);
// 	line = get_next_line(fd);
// 	printf("%s\n", line);
// }
