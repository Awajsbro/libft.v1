/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:06:31 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/04 22:42:53 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*n;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
		i++;
	if (!(n = (char*)malloc(sizeof(*n) * (i + 1))))
		return (NULL);
	n[i] = 0;
	i = -1;
	while (s[++i] != 0)
		n[i] = f(i, s[i]);
	n[i] = 0;
	return (n);
}
