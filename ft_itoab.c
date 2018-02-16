/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 16:46:55 by awajsbro          #+#    #+#             */
/*   Updated: 2018/02/16 15:58:30 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoab(long long n, int b, char *out)
{
	long long	tmp;
	int			neg;
	int			cnt;
	int			lim;
	static char	*base = "0123456789abcdef";

	tmp = n;
	cnt = tmp > -1 ? 1 : 2;
	tmp = tmp > 0 ? -tmp : tmp;
	while (tmp < (-1 * (b - 1)))
	{
		tmp = tmp / b;
		cnt++;
	}
	out[0] = n < 0 ? '-' : '@';
	out[cnt] = 0;
	lim = n < 0 ? 0 : -1;
	neg = n < 0 ? -1 : 1;
	while (--cnt > lim)
	{
		out[cnt] = base[(neg * (n % b))];
		n = n / b;
	}
	return (out);
}
