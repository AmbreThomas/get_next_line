/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 18:22:43 by athomas           #+#    #+#             */
/*   Updated: 2016/07/12 18:32:52 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;

	i = 0;
	if (s)
	{
		len = ft_strlen(s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			i++;
			if (s[i] == '\0')
				return (ft_strdup(""));
		}
		while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
			len--;
		return (ft_strsub(s, i, (len - i + 1)));
	}
	return (0);
}
