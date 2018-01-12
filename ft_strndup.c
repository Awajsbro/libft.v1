/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 18:54:53 by awajsbro          #+#    #+#             */
/*   Updated: 2018/01/07 14:27:02 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t len)
{
	char	*s2;
	size_t	i;

	i = 0;
	while (s1[i] != 0 && i < len)
		i++;
	if (!(s2 = (char*)malloc(sizeof(*s2) * (i + 1))))
		return (NULL);
	s2[i] = 0;
	i = -1;
	while (s1[++i] != 0 && i < len)
		s2[i] = s1[i];
	return (s2);
}
