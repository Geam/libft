
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
