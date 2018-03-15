/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:11:57 by awajsbro          #+#    #+#             */
/*   Updated: 2018/02/28 16:52:15 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(long long n)
{
	char	cnt;
	char	*out;

	cnt = n >= 0 ? (ft_cntb(n, 10) + 1) : (ft_cntb(n, 10) + 2);
	if (!(out = (char*)malloc(sizeof(*out) * cnt)))
		return (NULL);
	return (ft_itoab(n, 10, out));
}
