#include <stdlib.h>
#include "libft.h"

int		ft_lstinit(t_list_head **head, int new)
{
	if (new)
	{
		if (!(*head = (t_list_head *)malloc(sizeof(t_list_head))))
			return (1);
	}
	ft_bzero(*head, sizeof(t_list_head));
	return (0);
}
