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

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
		size_t	len2;

		if (*s2 == '\0')
				return ((char *)s1);
		len2 = ft_strlen(s2);
		while (*s1 != '\0' && n-- >= len2)
		{
				if (*s1 == *s2 && ft_memcmp(s1, s2, len2) == 0)
						return ((char *)s1);
				s1++;
		}
		return (NULL);
}
