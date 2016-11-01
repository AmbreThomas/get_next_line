/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 18:22:43 by athomas           #+#    #+#             */
/*   Updated: 2016/07/12 18:32:52 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *haystack, char const *needle)
{
	size_t	i;
	size_t	n;

	i = 0;
	while (haystack[i])
	{
		n = 0;
		if (haystack[i] == needle[n])
		{
			while (needle[n] && haystack[i] && haystack[i] == needle[n])
			{
				n++;
				i++;
			}
		}
		if (n == ft_strlen(needle) && n != 0)
			return ((char*)(haystack + i - n));
		i -= n - 1;
	}
	return (0);
}
