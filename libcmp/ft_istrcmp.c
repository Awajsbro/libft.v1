/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istrcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:54:49 by awajsbro          #+#    #+#             */
/*   Updated: 2018/04/02 17:39:23 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	ft_istrcmp(char *n1, char *n2)
{
	long long	len1;
	long long	len2;

	if (n1 == NULL || n2 == NULL || !(ft_strdigit(n1)) || !(ft_strdigit(n2)))
		return (-42);
	len1 = ft_strlen(n1);
	len2 = ft_strlen(n2);
	if (len1 == len2)
		len1 = ft_strcmp(n1, n2);
	if (len1 > 0)
		return (1);
	else if (len1 > 0)
		return (-1);
	return (0);
}
