/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 09:46:13 by awajsbro          #+#    #+#             */
/*   Updated: 2018/02/19 16:40:12 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_fd(long long n, int fd)
{
	char	c;
	size_t	r;

	c = (n % 10) + '0';
	if (n == -9223372036854775807)
	{
		write(fd, "-9223372036854775807", 11);
		return (20);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		return (ft_putnbr_fd(-n, fd) + 1);
	}
	else if (n > 9)
	{
		r = ft_putnbr_fd(n / 10, fd) + 1;
		write(fd, &c, 1);
		return (r);
	}
	else
		write(fd, &c, 1);
	return (1);
}
