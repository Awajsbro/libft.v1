/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 09:38:44 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/06 18:03:28 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putendl_fd(char const *s, int fd)
{
	size_t	r;

	if (s == NULL)
		return (0);
	r = ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
	return (r + 1);
}
