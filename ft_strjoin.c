/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:10:12 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/05 00:08:09 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (!(n = (char*)malloc(sizeof(n) * (i + j + 1))))
		return (NULL);
	n[i + j] = 0;
	j = i;
	i = -1;
	while (s1[++i] != 0)
		n[i] = s1[i];
	i = -1;
	while (s2[++i] != 0)
		n[i + j] = s2[i];
	return (n);
}
