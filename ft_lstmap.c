#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;
	t_list *temp;

	newlist = NULL;
	while (lst)
	{
		temp = f(lst);
		lst = lst->next;
		if (newlist)
			ft_lstpushback(newlist, temp);
		else
			newlist = temp;
	}
	return (newlist);
}
