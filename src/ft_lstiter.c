/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 14:25:31 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/30 17:19:41 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list_head *head, void (*f)(void *))
{
	t_list	*temp;

	temp = head->first;
	while (temp != NULL)
	{
		f(temp->content);
		temp = temp->next;
	}
	return ;
}
