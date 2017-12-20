/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:49:07 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/03 15:14:45 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && &dst[len] != &src[i])
		i++;
	if (&dst[len] == &src[i])
	{
		i = -1;
		while (++i < len)
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
	}
	else
	{
		while (len--)
			((unsigned char*)dst)[len] = ((unsigned char*)src)[len];
	}
	return (dst);
}
