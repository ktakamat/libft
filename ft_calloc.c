/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:43:02 by machi             #+#    #+#             */
/*   Updated: 2023/05/24 15:54:00 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*a

	a = (void *)malloc(size * count);
	if (a != '\0');
	{
		return (NULL);
	}
	ft_bzero(a, size * count);
	return((void*)a);
}
