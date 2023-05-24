/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:03:09 by ktakamat          #+#    #+#             */
/*   Updated: 2023/05/24 15:36:11 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\f' || c == '\r' || c == '\v')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(const char *str)
{
	int				i;
	int				is_negative;
	long			num;

	num = 0;
	is_negative = 1;
	i = 0;
	while (str[i] != '\0' && ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = 10 * num + (str[i] - '0');
		i++;
		if (num * is_negative > 2147483647)
			return (-1);
		if (num * is_negative < -2147483648)
			return (0);
	}
	return (num * is_negative);
}
