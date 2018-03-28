/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 14:45:55 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/26 16:22:12 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*n;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
		i++;
	if (!(n = (char*)malloc(sizeof(*n) * i + 1)))
		return (NULL);
	n[i] = 0;
	i = -1;
	while (s[++i] != 0)
		n[i] = f(s[i]);
	n[i] = 0;
	return (n);
}
