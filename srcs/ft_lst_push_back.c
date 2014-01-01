/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 19:08:58 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/03 19:57:02 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_push_back(void const *content, size_t cont_size, t_list **start)
{
	t_list	*temp;

	if (*start == NULL)
		*start = ft_lstnew(content, cont_size);
	else
	{
		temp = *start;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ft_lstnew(content, cont_size);
	}
	return ;
}
