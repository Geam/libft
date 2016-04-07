/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushfront.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 15:42:54 by mdelage           #+#    #+#             */
/*   Updated: 2016/04/07 15:43:47 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstpushfront(t_list_head *head, t_list *link)
{
	if (!head || !link)
		return (1);
	if (head->first)
		link->next = head->first;
	else
		head->last = link;
	head->first = link;
	++head->len;
	return (0);
}
