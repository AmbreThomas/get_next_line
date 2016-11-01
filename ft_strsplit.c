/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 17:49:09 by athomas           #+#    #+#             */
/*   Updated: 2016/07/17 12:13:40 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		count_words(char *str, char c)
{
	int count;

	count = 0;
	while (*str && *str == c)
		str++;
	while (*str)
	{
		if (*str && *str != c)
			count++;
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
	}
	return (count);
}

int		count_lenwords(char *str, int i, char c)
{
	int size;

	size = 0;
	while (str[i] && str[i] != c)
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**mots;
	int		j;
	int		i;
	int		t;
	int		taille;

	mots = (char**)malloc(sizeof(char*) * (count_words((char*)s, c) + 1));
	i = 0;
	t = 0;
	while (((char*)s)[i])
	{
		if (((char*)s)[i] != c)
		{
			j = 0;
			taille = count_lenwords((char*)s, i, c);
			mots[t] = (char*)malloc(sizeof(char) * (taille));
			while (j < taille)
				mots[t][j++] = ((char*)s)[i++];
			mots[t++][j] = '\0';
		}
		i++;
	}
	mots[t] = NULL;
	return (mots);
}
