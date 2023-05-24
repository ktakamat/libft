/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakamat <ktakamat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:43:02 by machi             #+#    #+#             */
/*   Updated: 2023/05/24 21:24:30 by ktakamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	if (size != '\0' && (size * count) / size != count)
	{
		return (0);
	}
	a = malloc(size * count);
	if (a == '\0')
	{
		return (NULL);
	}
	ft_bzero(a, size * count);
	return (a);
}
