/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakamat <ktakamat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:14:14 by ktakamat          #+#    #+#             */
/*   Updated: 2023/05/24 20:04:18 by ktakamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	a;
	int		i;

	i = 0;
	a = (char)c;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == a)
		{
			return (str);
		}
		str++;
	}
	if (a == '\0')
	{
		return (str);
	}
	return (NULL);
}
