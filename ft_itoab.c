/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 16:46:55 by awajsbro          #+#    #+#             */
/*   Updated: 2018/01/26 18:36:04 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count(long n, int b)
{
	int cnt;

	cnt = n > -1 ? 1 : 2;
	n = n > 0 ? -n : n;
	while (n < (-1 * (b - 1)))
	{
		n = n / b;
		cnt++;
	}
	return (cnt);
}

char			*ft_itoab(long n, int b)
{
	int			neg;
	int			cnt;
	int			lim;
	char		*s;
	static char	*base = "0123456789abcdef";

	cnt = ft_count(n, b);
	if (!(s = (char*)malloc(sizeof(*s) * cnt + 1)))
		return (NULL);
	s[0] = n < 0 ? '-' : '@';
	s[cnt] = 0;
	lim = n < 0 ? 0 : -1;
	neg = n < 0 ? -1 : 1;
	while (--cnt > lim)
	{
		s[cnt] = base[(neg * (n % b))];
		n = n / b;
	}
	return (s);
}
