/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 16:46:07 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/19 17:46:24 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
	{
		return (-1);
	}
	while ((min + i) < max)
	{
		*range[i] = min + i;
		i++;
	}
	return (max - min);
}
