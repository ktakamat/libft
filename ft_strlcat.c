/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:50:23 by ktakamat          #+#    #+#             */
/*   Updated: 2023/05/24 18:57:09 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*a;
	size_t	len_dst;
	size_t	len_src;
	size_t	len;
	size_t	i;

	a = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	len = 0;
	a = 0;
    i = 0;
	if (size > len_dst)
		len = len_dst + len_src;
	else
		len = len_src + size;
	while (a[i] != '\0' && (len_dst + 1) < size)
	{
		dst[len_dst] = a[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (len);
}
