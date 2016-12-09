/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 11:14:19 by athomas           #+#    #+#             */
/*   Updated: 2016/07/12 16:00:12 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*ret;
	size_t	start;

	ret = (char *)dst;
	start = n;
	while (*src && n--)
		*dst++ = *src++;
	if (n < start)
		ft_bzero(dst, n);
	return (ret);
}
