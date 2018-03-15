/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendln_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:47:50 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/06 18:03:02 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putendln_fd(char const *s, int fd, size_t len)
{
	size_t	r;

	if (s == NULL)
		return (0);
	r = ft_putstrn_fd(s, fd, len);
	if (r < len)
		r = r + write(fd, "\n", 1);
	return (r);
}
