/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:57:06 by ddias             #+#    #+#             */
/*   Updated: 2023/03/06 20:59:44 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_tidy(char *buffer);
int		ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
void	ft_fixer_mover(char *buffer, int gate, int i);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 11

# endif
#endif
