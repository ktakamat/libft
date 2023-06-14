/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 23:22:00 by machi             #+#    #+#             */
/*   Updated: 2023/06/02 20:54:13 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;
	
	list = malloc(sizeof(*list));
	if (list == NULL)
	{
		return (NULL);
	}
	list->content = content;
	list->next = NULL;
	return (list);
}
