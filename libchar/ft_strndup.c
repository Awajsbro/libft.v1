/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 18:54:53 by awajsbro          #+#    #+#             */
/*   Updated: 2018/05/15 12:50:09 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strndup(const char *s1, size_t len)
{
	char	*s2;

	len = ft_strnlen(s1, len);
	s2 = ft_strnew(len);
	s2[len] = 0;
	while (len-- != 0)
		s2[len] = s1[len];
	return (s2);
}
