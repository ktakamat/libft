/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakamat <ktakamat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:50:23 by ktakamat          #+#    #+#             */
/*   Updated: 2023/05/21 20:13:33 by ktakamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
	{
		i++;
	}
	j = i;
	while (src[i - j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < dstsize)
	dst[i] = '\0';
	return (j + ft_strlen(src));
}
