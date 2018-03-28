/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:58:02 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/26 16:22:12 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*n;

	if (s == NULL)
		return (NULL);
	i = ft_strlen((char*)s);
	if (i < start + len || i < start)
		return (NULL);
	if (!(n = (char*)malloc(sizeof(*n) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		n[i] = s[start + i];
		i++;
	}
	n[i] = 0;
	return (n);
}
