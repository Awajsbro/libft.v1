/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:30:28 by awajsbro          #+#    #+#             */
/*   Updated: 2018/02/06 11:40:37 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (n == 0)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && i < n - 1)
		i++;
	return (s1[i] == s2[i] ? 1 : 0);
}
