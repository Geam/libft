/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 10:58:21 by mdelage           #+#    #+#             */
/*   Updated: 2016/04/07 15:43:22 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstsearch(t_list_head *head, int (*search)(void *, void *),
			void *match)
{
	void	*ret;
	t_list	*temp;

	temp = NULL;
	ret = NULL;
	if (head->first)
	{
		temp = head->first;
		while (temp && !search(temp->content, match))
			temp = temp->next;
		if (temp)
			ret = temp->content;
	}
	return (ret);
}
