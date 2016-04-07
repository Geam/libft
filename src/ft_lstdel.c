/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 14:10:01 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/30 18:11:52 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list_head *head, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp_next;

	temp = head->first;
	while (temp != NULL)
	{
		temp_next = temp->next;
		del(temp->content);
		free(temp);
		temp = temp_next;
	}
	ft_bzero(head, sizeof(t_list_head));
	return ;
}
