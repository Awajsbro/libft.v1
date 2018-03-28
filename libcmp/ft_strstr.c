/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:51:16 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/26 16:22:12 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	if (needle[0] == 0)
		return ((char*)haystack);
	i = -1;
	j = 0;
	while (haystack[++i] != 0 && needle[j] != 0)
	{
		while (haystack[i + j] == needle[j] && needle[j] != 0)
			j++;
		if (needle[j] == 0)
			return ((char*)&haystack[i]);
		j = 0;
	}
	return (NULL);
}
