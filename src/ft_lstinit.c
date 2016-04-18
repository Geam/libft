/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 15:42:41 by mdelage           #+#    #+#             */
/*   Updated: 2016/04/07 15:42:41 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_lstinit(t_list_head **head, size_t head_size)
{
	if (head_size)
	{
		head_size = (head_size < sizeof(t_list_head)) ? sizeof(t_list_head) :
			head_size;
		if (!(*head = (t_list_head *)malloc(head_size)))
			return (1);
	}
	ft_bzero(*head, sizeof(t_list_head));
	return (0);
}
