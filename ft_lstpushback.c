#include "libft.h"

void	ft_lstpushback(t_list *lst, t_list *elem)
{
	while (lst->next)
		lst = lst->next;
	lst->next = elem;
}
