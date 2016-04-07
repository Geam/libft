/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 14:51:34 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/01 14:35:34 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list_head	*ft_lstmap(t_list_head *head, t_list *(*f)(t_list *))
{
	t_list		*temp;
	t_list		*new;
	t_list_head	*new_head;

	new_head = NULL;
	if (!ft_lstinit(&new_head, 1))
	{
		temp = head->first;
		while (temp)
		{
			new = f(temp);
			ft_lstpushback(new_head, new);
			temp = temp->next;
		}
	}
	return (new_head);
}
