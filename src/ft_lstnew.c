/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 10:49:48 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/30 17:48:41 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*temp;

	if ((temp = (t_list*)malloc(sizeof(t_list))))
	{
		if (content != NULL)
		{
			if (content_size)
			{
				temp->content = malloc(content_size);
				if (temp == NULL)
					return (NULL);
				ft_memcpy(temp->content, content, content_size);
			}
			else
				temp->content = content;
		}
		else
			temp->content = NULL;
		temp->next = NULL;
	}
	return (temp);
}
