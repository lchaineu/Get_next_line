/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaineu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:23:13 by lanachaineu       #+#    #+#             */
/*   Updated: 2020/11/09 10:42:55 by lanachaineu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	int		i;
	int		j;
	char	*res;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(str1) + ft_strlen(str2);
	if (!(res = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	while (str1)
	{
		res[i] = str1[i];
		i++;
	}
	while (str2)
	{
		res[i] = str2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	free (str1);
	return (res);
}

int		is_break(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
