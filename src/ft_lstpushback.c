
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
