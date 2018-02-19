/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrb_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 19:20:01 by awajsbro          #+#    #+#             */
/*   Updated: 2018/02/19 16:58:30 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbrb_fd(long long n, int fd, char b)
{
	static char *base = "0123456789abcdef";
	size_t		r;

	if (b != 10)
		n = n >= 0 ? n : -n;
	if (n == -9223372036854775807)
	{
		write(fd, "-9223372036854775807", 11);
		return (20);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		return (ft_putnbrb_fd(-n, fd, b) + 1);
	}
	else if (n >= b)
	{
		r = ft_putnbrb_fd(n / b, fd, b) + 1;
		write(fd, &(base[n % b]), 1);
		return (r);
	}
	else
		write(fd, &(base[n % b]), 1);
	return (1);
}
