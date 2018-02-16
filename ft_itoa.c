/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:11:57 by awajsbro          #+#    #+#             */
/*   Updated: 2018/02/16 16:00:50 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count(long long n)
{
	int cnt;

	cnt = n > -1 ? 1 : 2;
	n = n > 0 ? -n : n;
	while (n < -9)
	{
		n = n / 10;
		cnt++;
	}
	return (cnt);
}

char			*ft_itoa(long long n)
{
	int		neg;
	int		cnt;
	int		lim;
	char	*s;

	cnt = ft_count(n);
	if (!(s = (char*)malloc(sizeof(*s) * cnt + 1)))
		return (NULL);
	s[0] = n < 0 ? '-' : '@';
	s[cnt] = 0;
	lim = n < 0 ? 0 : -1;
	neg = n < 0 ? -1 : 1;
	while (--cnt > lim)
	{
		s[cnt] = ('0' + (neg * (n % 10)));
		n = n / 10;
	}
	return (s);
}
