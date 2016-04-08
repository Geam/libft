#include "libft.h"

int		ft_lstinsert(t_list_head *head, t_list *to_insert,
			int (*insert_here)(void *, void *))
{
	t_list	*temp;

	if (!head || !to_insert)
		return (1);
	if (!head->first || insert_here(to_insert, head->first))
		return (ft_lstpushfront(head, to_insert));
	temp = head->first;
	while (temp->next && !insert_here(to_insert, temp->next))
		temp = temp->next;
	if (!temp->next)
		head->last = to_insert;
	to_insert->next = temp->next;
	temp->next = to_insert;
	++head->len;
	return (0);
}
