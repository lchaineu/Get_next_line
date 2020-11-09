/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaineu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:23:27 by lanachaineu       #+#    #+#             */
/*   Updated: 2020/11/09 10:43:06 by lanachaineu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/uio.h>

int		ft_strlen(const char *str);
char	*ft_strjoin(char *str1, char *str2);
int		is_break(char *str);
int		read_line(int fd, char **line);
int		before_break(char *line);
int		after_break(char *line);
int		get_next_line(int fd, char **line);

#endif
