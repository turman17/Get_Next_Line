/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:17:55 by diogpere          #+#    #+#             */
/*   Updated: 2023/04/14 10:28:29 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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