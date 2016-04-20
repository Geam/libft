/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 10:49:48 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/30 17:48:41 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstinsert(t_list_head *head, t_list *to_insert,
			int (*insert_here)(void *, void *))
{
	t_list	*temp;

	if (!head || !to_insert)
		return (1);
	if (!head->first || insert_here(head->first->content, to_insert->content))
		return (ft_lstpushfront(head, to_insert));
	temp = head->first;
	while (temp->next && !insert_here(temp->next->content, to_insert->content))
		temp = temp->next;
	if (!temp->next)
		head->last = to_insert;
	to_insert->next = temp->next;
	temp->next = to_insert;
	++head->len;
	return (0);
}
