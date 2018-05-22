/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:41:19 by awajsbro          #+#    #+#             */
/*   Updated: 2018/05/20 19:51:19 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	ft_strdigit(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return (0);
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (s[i] == 0)
		return (0);
	while (s[i] != 0)
	{
		if (ft_isdigit(s[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
