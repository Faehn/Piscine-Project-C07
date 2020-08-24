/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:20:04 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/20 17:56:55 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char *str);
#include <stdlib.h>

char 	*ft_itoa_base(int nbr, char *base_to, int i, int sign)
{
	char *str;
	int baselen;

	baselen = ft_strlen(base_to); 
	if (nbr == 0)
	{
		if (sign < 0)
			str = malloc(sizeof(char) * (i + 1));
		else
			str = malloc(sizeof(char) * i);
		if (str == NULL)
			return (NULL);
		return (str);
	}
	str = ft_itoa_base((nbr / baselen), base_to, i + 1, sign);
	str[i] = base[nbr % baselen];
	if (sign < 0)
		str[0] = '-';
	return (str);
}
