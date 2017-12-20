/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:39:33 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/02 12:49:18 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != 0)
		i++;
	while (i > 0 && s[i] != (c + 0))
		i--;
	if (s[i] != (c + 0))
		return (NULL);
	return ((char*)&s[i]);
}
