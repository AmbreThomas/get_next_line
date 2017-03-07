/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 09:46:53 by athomas           #+#    #+#             */
/*   Updated: 2016/07/11 18:02:39 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char const *nptr)
{
	int signe;
	int result;
	int i;

	signe = 1;
	i = 0;
	result = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\v'
					|| *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (nptr[i] == '-')
		signe = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i])
	{
		if (nptr[i] <= '9' && nptr[i] >= '0')
			result = result * 10 + nptr[i] - '0';
		else
			return (result * signe);
		i++;
	}
	return (result * signe);
}
