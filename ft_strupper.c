/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 19:56:52 by awajsbro          #+#    #+#             */
/*   Updated: 2018/02/16 20:12:29 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strupper(char *s)
{
	size_t i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i] != 0)
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
	return (s);
}
