/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:03:06 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/20 17:35:51 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char *ft_itoa_base(int nbr, char *base_to, int i);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_where_in_base(char a, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == a)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_check_base_error(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (i < (ft_strlen(base) - 1))
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

int		ft_atoi_base(char *nbr, char *base_from)
{
	int i;
	int sign;
	int temp_int;

	i = 0;
	sign = 1;
	temp_int = 0;
		while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
			i++;
		while (nbr[i] == '+' || nbr[i] == '-')
		{
			if (nbr[i] == '-')
				sign *= -1;
			i++;
		}
		while (ft_where_in_base(nbr[i], base_from) != -1)
		{
			temp_int = (temp_int * ft_strlen(base_from)) + ft_where_in_base(nbr[i], base_from);
			i++;
		}
		return (temp_int * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int temp;
	char *dest;

	if (ft_check_base_error(base_from) == 1 && ft_check_base_error(base_to) == 1)
	{
		temp = ft_atoi_base(nbr, base_from);
		if (temp < 0)
			dest = ft_itoa_base(temp, base_to, 0, -1);
		else
			dest = ft_itoa_base(temp, base_to, 0, 1);
		return (dest);
	}
	return (NULL);
}
