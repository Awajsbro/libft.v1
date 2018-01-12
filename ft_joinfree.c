/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_joinfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 19:22:12 by awajsbro          #+#    #+#             */
/*   Updated: 2018/01/12 14:25:18 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_joinfree(char *s1, char *s2)
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
	free(s1);
	free(s2);
	return (n);
}
