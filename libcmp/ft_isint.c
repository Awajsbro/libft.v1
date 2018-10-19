/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 15:02:20 by awajsbro          #+#    #+#             */
/*   Updated: 2018/10/16 16:04:21 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	ft_isint(char *s)
{
	int		i;
	long	n;

	if (s == NULL)
		return (0);
	if (*s == '-' || *s == '+')
		i = 0;
	else
		i = -1;
	if (ft_strlen(s) - i > 11)
		return (0);
	while (s[++i] != 0)
		if (ft_isdigit(s[i]) == 0)
			return (0);
	n = ft_atoi(s);
	if (n > INT32_MAX || n < INT32_MIN)
		return (0);
	return (1);
}
