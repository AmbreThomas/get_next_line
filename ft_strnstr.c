/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 18:22:43 by athomas           #+#    #+#             */
/*   Updated: 2016/07/12 18:32:52 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (haystack[i] && i + ft_strlen(needle) <= n)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] && haystack[i] && haystack[i] == needle[j])
			{
				j++;
				i++;
			}
		}
		if (j == ft_strlen(needle) && j != 0)
			return ((char*)(haystack + i - j));
		i -= j - 1;
	}
	return (0);
}
