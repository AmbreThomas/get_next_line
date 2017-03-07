/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 17:49:05 by athomas           #+#    #+#             */
/*   Updated: 2016/07/13 16:46:05 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, char const *src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int temp;

	i = 0;
	while (dest[i] && i < size)
		i++;
	j = 0;
	temp = i;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (temp < size)
		dest[i] = '\0';
	return (temp + ft_strlen(src));
}
