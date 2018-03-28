/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:27:06 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/26 16:22:12 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		n;
	int		r;

	i = 0;
	r = 0;
	while ((str[i] <= 15 && str[i] >= 9) || str[i] == ' ')
		i++;
	n = str[i] == '-' ? 1 : 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] > '9' || str[i] < '0')
		return (0);
	while (str[i] <= '9' && str[i] >= '0')
	{
		r = r - str[i] + 48;
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			r = r * 10;
		i++;
	}
	r = n == 1 ? r : (-1 * r);
	return (r);
}
