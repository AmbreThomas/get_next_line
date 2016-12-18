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

static size_t		ft_count_first_space(char const *str)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
	{
		count++;
		i++;
	}
	return (count);
}

static size_t		ft_count_end_space(char const *str)
{
	size_t	i;
	size_t	count;
	size_t	len;

	len = ft_strlen(str);
	i = len - 1;
	if (len == 0)
		return (0);
	count = 0;
	while (i > 0 && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
	{
		count++;
		i--;
	}
	return (count);
}

char				*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	endspce;
	size_t	len;

	i = ft_count_first_space(s);
	endspce = ft_count_end_space(s);
	len = ft_strlen(s);
	if (len - i <= 0)
		return (ft_strdup(""));
	j = 0;
	str = ft_strnew(len - i - endspce);
	if (!str)
		return (NULL);
	while (s[i] != '\0' && i < len - endspce)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}
