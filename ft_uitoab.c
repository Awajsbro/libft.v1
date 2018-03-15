/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:43:09 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/12 16:48:39 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoab(unsigned long long n, char b, char *out)
{
	char		cnt;
	static char	*base = "0123456789abcdef";

	cnt = ft_ucntb(n, b);
	if (out == NULL || b < 2 || b > 16)
		return (NULL);
	out[cnt + 0] = 0;
	while (--cnt)
	{
		out[cnt + 0] = base[n % b];
		n = n / b;
	}
	out[cnt + 0] = base[n % b];
	return (out);
}
