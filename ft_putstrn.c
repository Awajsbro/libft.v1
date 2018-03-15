/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:04:44 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/06 18:17:39 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstrn(char const *s, size_t len)
{
	size_t	r;

	if (s == NULL)
		return (0);
	r = ft_strlen(s);
	if (r < len)
		len = r;
	return (write(1, s, len));
}
