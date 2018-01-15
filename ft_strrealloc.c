/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 16:33:07 by awajsbro          #+#    #+#             */
/*   Updated: 2018/01/15 13:52:55 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrealloc(char *s, size_t len)
{
	char	*new;

	if (!(new = (char*)malloc(sizeof(*new) * (len + 1))))
		return (NULL);
	new[len] = 0;
	new = ft_memccpy(new, s, 0, len);
	free(s);
	return (new);
}
