/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 15:42:27 by athomas           #+#    #+#             */
/*   Updated: 2016/07/11 17:04:59 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		max_pow(int n)
{
	int i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	i--;
	return (i);
}

int		ft_pow(int n)
{
	int		res;

	res = 1;
	while (n > 0)
	{
		res *= 10;
		n--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		puissance;
	int		i;

	s = 0;
	puissance = max_pow(n);
	if ((s = (char*)malloc((puissance + 1) * sizeof(char))) == NULL)
		return (NULL);
	i = 0;
	while (n)
	{
		s[i] = n / ft_pow(puissance) + '0';
		n = n - (n / ft_pow(puissance) * ft_pow(puissance));
		puissance--;
		i++;
	}
	return (s);
}
