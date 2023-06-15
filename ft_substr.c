/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:22:35 by machi             #+#    #+#             */
/*   Updated: 2023/06/15 11:25:53 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*new;
	size_t			sum;

	if (!s)
		return (NULL);
	sum = ft_strlen(s);
	if (sum - start < len)
		len = sum - start;
	if (start >= sum || len == 0)
		return (ft_strdup(""));
	new = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (new == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
