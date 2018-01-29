/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:07:29 by awajsbro          #+#    #+#             */
/*   Updated: 2018/01/29 15:22:20 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstrn_fd(char const *s, int fd, size_t len)
{
	size_t r;

	if (s == NULL)
		return (0);
	r = ft_strlen(s);
	r = r > len ? len : r;
	write(fd, s, r);
	return (r);
}
