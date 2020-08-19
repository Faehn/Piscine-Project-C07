/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 17:51:10 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/19 18:16:51 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *dest;
	int global_size;
	int i;
	int j;
	int k;

	i = 0;
	global_size = 0;
	while (i < size)
	{
		global_size += ft_strlen(strs[i]);
		i++;
	}
	global_size += ft_strlen(sep) * (size - 1);
	dest = malloc(sizeof(char) * global_size +  1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			dest[k] = strs[i][j];
			k++;
			j++;
		}
		if (i < (size - 1))
		{
			j = 0;
			while (sep[j])
			{
				dest[k] = sep[j];
				k++;
				j++;
			}
		}
		i++;
	}
	return (dest);
}
