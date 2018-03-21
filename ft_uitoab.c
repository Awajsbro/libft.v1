/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:43:09 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/16 12:24:52 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define FT_BASE_CHARSET "0123456789abcdefghijklmnopqrstuvwxz"

char	*ft_uitoab(unsigned long long n, char b, char *out)
{
	char		cnt;

	cnt = ft_ucntb(n, b);
	if (out == NULL || b < 2 || b > 16)
		return (NULL);
	out[cnt + 0] = 0;
	while (--cnt)
	{
		out[cnt + 0] = FT_BASE_CHARSET[n % b];
		n = n / b;
	}
	out[cnt + 0] = FT_BASE_CHARSET[n % b];
	return (out);
}
