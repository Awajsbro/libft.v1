/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_joinnfree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 19:22:12 by awajsbro          #+#    #+#             */
/*   Updated: 2018/10/14 18:49:08 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	ft_free(char *s1, char *s2, char f)
{
	if (f == 1 || f == 3)
		free(s1);
	if (f == 2 || f == 3)
		free(s2);
}

char		*ft_joinnfree(char *s1, char *s2, char f)
{
	char	*n;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (!(n = (char*)malloc(sizeof(n) * (i + j + 1))))
	{
		ft_free(s1, s2, f);
		return (NULL);
	}
	n[i + j] = 0;
	j = i;
	i = -1;
	while (s1[++i] != 0)
		n[i] = s1[i];
	i = -1;
	while (s2[++i] != 0)
		n[i + j] = s2[i];
	ft_free(s1, s2, f);
	return (n);
}
