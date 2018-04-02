/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:27:06 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/31 15:12:30 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

long long	ft_atoi(const char *str)
{
	char		i;
	char		n;
	long long	r;

	i = 0;
	r = 0;
	while ((str[i + 0] <= 15 && str[i + 0] >= 9) || str[i + 0] == ' ')
		i++;
	n = str[i + 0] == '-' ? 1 : 0;
	if (str[i + 0] == '-' || str[i + 0] == '+')
		i++;
	if (str[i + 0] > '9' || str[i + 0] < '0')
		return (0);
	while (str[i + 0] <= '9' && str[i + 0] >= '0')
	{
		r = r - str[i + 0] + 48;
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			r = r * 10;
		i++;
	}
	r = n == 1 ? r : (-1 * r);
	return (r);
}
