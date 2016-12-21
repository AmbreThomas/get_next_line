/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 10:44:44 by athomas           #+#    #+#             */
/*   Updated: 2016/12/21 10:44:53 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	if (!alst)
		return ;
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
