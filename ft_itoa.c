/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:38:30 by ktakamat          #+#    #+#             */
/*   Updated: 2023/06/06 13:45:13 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_abs(long int nbr)
{
	if (nbr < 0)
	{
		return (-1 * nbr);
	}
	else
	{
		return (nbr);
	}
}

int	ft_len(long int nbr)
{
	int	len;
	
	if (nbr <= 0)
	{
		len = 1;
	}
	else
	{
		len = 0;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = ft_len(n);
	c = (char *)malloc(sizeof(char) * len + 1);
	if (c == NULL)
		return (NULL);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len] = '0' + ft_abs(n % 10);
		n = ft_abs(n / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}
