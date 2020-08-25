/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:20:04 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/25 16:52:00 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

int		ft_nbrlen(long int nbr, int baselen)
{
	int len;

	if (nbr < 0)
		len = 2;
	else
		len = 1;
	while ((nbr / baselen) != 0)
	{
		nbr /= baselen;
		len++;
	}
	return (len);
}

void	ft_char_by_char(char *dest, long int nbr, char *base_to, int i)
{
	long int baselen;

	baselen = ft_strlen(base_to);
	if ((nbr / baselen) != 0)
	{
		ft_char_by_char(dest, nbr / baselen, base_to, i - 1);
		dest[i] = base_to[nbr % baselen];
	}
	else
		dest[i] = base_to[nbr];
}

char	*ft_itoa_base(long int nbr, char *base_to)
{
	char	*dest;
	int		destlen;

	destlen = ft_nbrlen(nbr, ft_strlen(base_to));
	dest = malloc(sizeof(char) * (destlen + 1));
	if (dest == NULL)
		return (NULL);
	dest[destlen] = '\0';
	if (nbr < 0)
	{
		dest[0] = '-';
		ft_char_by_char(dest, nbr * -1, base_to, destlen - 1);
	}
	else
		ft_char_by_char(dest, nbr, base_to, destlen - 1);
	return (dest);
}
