/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:12:27 by awajsbro          #+#    #+#             */
/*   Updated: 2018/01/06 18:55:25 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	while (s1[i] != 0)
		i++;
	if (!(s2 = (char*)malloc(sizeof(*s2) * (i + 1))))
		return (NULL);
	s2[i] = 0;
	i = -1;
	while (s1[++i] != 0)
		s2[i] = s1[i];
	return (s2);
}
