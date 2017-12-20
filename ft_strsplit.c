/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:12:36 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/04 23:49:11 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count(char const *s, char c, size_t i, int m)
{
	size_t	cnt;

	cnt = 0;
	while (s[i] != 0 && m == -42)
	{
		while (s[i] == c && s[i] != 0)
			i++;
		cnt = s[i] == 0 ? cnt : cnt + 1;
		while (s[i] != c && s[i] != 0)
			i++;
	}
	while (s[i] != 0 && s[i] != c && m == 42)
	{
		cnt++;
		i++;
	}
	return (cnt);
}

static	char	*ft_word(char const *s, char *n, char c, size_t *i)
{
	size_t	j;

	j = 0;
	while (s[*i] == c && s[*i] != 0)
		*i = *i + 1;
	if (!(n = (char*)malloc(sizeof(n) * ft_count(s, c, *i, 42) + 1)))
		return (NULL);
	while (s[*i] != 0 && s[*i] != c)
	{
		n[j] = s[*i];
		*i = *i + 1;
		j++;
	}
	n[j] = 0;
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**n;
	size_t	i;
	size_t	j;
	size_t	w;

	if (s == NULL)
		return (NULL);
	i = 0;
	w = ft_count(s, c, i, -42);
	if (!(n = (char**)malloc(sizeof(n) * w + 1)))
		return (NULL);
	n[w] = 0;
	j = -1;
	while (s[i] != 0 && ++j < w)
		n[j] = ft_word(s, n[j], c, &i);
	return (n);
}
