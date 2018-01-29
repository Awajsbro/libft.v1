/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 09:35:40 by awajsbro          #+#    #+#             */
/*   Updated: 2018/01/29 15:22:25 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_fd(char const *s, int fd)
{
	size_t	r;

	if (s == NULL)
		return (0);
	r = ft_strlen(s);
	write(fd, s, r);
	return (r);
}
