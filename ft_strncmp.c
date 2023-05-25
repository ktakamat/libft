/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:38:09 by ktakamat          #+#    #+#             */
/*   Updated: 2023/05/25 16:49:12 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;
	
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (n && *a == *b && *a && *b)
	{
		a++;
		b++;
		--n;
	}
	if (n)
	{
		return (*a - *b);
	}
	return (0);
}
