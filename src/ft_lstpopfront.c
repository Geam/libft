/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpopfront                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 17:20:12 by mdelage           #+#    #+#             */
/*   Updated: 2015/02/20 16:18:56 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_lstpopfront(t_list_head *head)
{
	t_list	*temp;
	void	*content;

	if (!head->first)
		return (NULL);
	temp = head->first;
	head->first = temp->next;
	if (head->last == temp)
		head->last = NULL;
	content = temp->content;
	free(temp);
	--head->len;
	return (content);
}
