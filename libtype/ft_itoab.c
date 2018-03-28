/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 16:46:55 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/26 16:22:12 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_itoab(long long n, char b, char *out)
{
	if (out == NULL || b < 2 || b > 16)
		return (NULL);
	if (n == LLONG_MIN)
	{
		out[0] = '-';
		ft_uitoab(9, b, &out[1]);
		ft_uitoab(223372036854775808, b, &out[ft_cntb(9, b) + 1]);
	}
	else if (b == 10 && n < 0)
	{
		out[0] = '-';
		ft_uitoab((n * -1), b, &out[1]);
	}
	else
		ft_uitoab(n, b, out);
	return (out);
}
