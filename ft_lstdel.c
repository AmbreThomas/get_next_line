#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	if (!alst)
		return;
	while (*alst)
	{
		temp = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		(*alst)->next = NULL;
		free(*alst);
		*alst = temp;
	}
	*alst = NULL;
}
