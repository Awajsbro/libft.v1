/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:49:07 by awajsbro          #+#    #+#             */
/*   Updated: 2018/11/15 11:27:30 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst < src)
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
