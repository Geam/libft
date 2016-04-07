/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 15:42:51 by mdelage           #+#    #+#             */
/*   Updated: 2016/04/07 15:43:43 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstpushback(t_list_head *head, t_list *link)
{
	if (!head || !link)
		return (1);
	if (head->last)
		head->last->next = link;
	else
		head->first = link;
	head->last = link;
	++head->len;
	return (0);
}
