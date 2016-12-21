/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 18:22:43 by athomas           #+#    #+#             */
/*   Updated: 2016/12/21 10:14:08 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_s;
	int		i;

	if (s == 0)
		return (0);
	i = 0;
	if ((new_s = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)) == NULL)
		return (0);
	while (s[i])
	{
		new_s[i] = (*f)(s[i]);
		i++;
	}
	new_s[i] = 0;
	return (new_s);
}
