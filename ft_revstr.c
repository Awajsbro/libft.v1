/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:33:54 by awajsbro          #+#    #+#             */
/*   Updated: 2018/02/28 14:59:59 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_revers(char *s, size_t i, size_t j)
{
	char	tmp[j];

	ft_strcpy(tmp, s);
	while (s[i] != 0)
	{
		s[i] = tmp[j];
		i++;
		j--;
	}
	return (s);
}

char		*ft_revstr(char *s)
{
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	return (ft_revers(s, i, j));
}
