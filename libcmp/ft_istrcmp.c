/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istrcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:54:49 by awajsbro          #+#    #+#             */
/*   Updated: 2018/05/22 11:59:51 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static long long	find_ABS_val(char *s)
{
	long long	i;

	i = -1;
	while (s[++i] == '0' || s[i] == '+' || s[i] == '-')
		;
	return (i);
}

char				ft_istrcmp(char *n1, char *n2)
{
	long long	len1;
	long long	len2;
	long long	i;
	long long	j;

	if (n1 == NULL || n2 == NULL || !(ft_strdigit(n1)) || !(ft_strdigit(n2)))
		return (-42);
	i = find_ABS_val(n1);
	j = find_ABS_val(n2);
	if (((n1[0] == '-' && n1[i] != 0) || (n2[0] == '-' && n2[j] != 0))
		&& (n1[0] != '-' || n2[0] != '-'))
		return (n1[0] == '-' ? -1 : 1);
	len1 = ft_strlen(&n1[i]);
	len2 = ft_strlen(&n2[j]);
	if (len1 != len2)
	{
		if (n1[0] == '-' && n2[0] == '-')
			return (len1 > len2 ? -1 : 1);
		return (len1 > len2 ? 1 : -1);
	}
	len1 = ft_strcmp(&n1[i], &n2[j]);
	if (len1 == 0)
		return (0);
	len1 = n1[0] == '-' ? -len1 : len1;
	return (len1 > 0 ? 1 : -1);
}
