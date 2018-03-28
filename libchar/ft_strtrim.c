/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 09:08:47 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/26 16:22:12 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*n;

	if (s == NULL)
		return (NULL);
	i = 0;
	while ((s[i] == 32 || s[i] == 44 || s[i] == 10 || s[i] == 9) && s[i] != 0)
		i++;
	j = 0;
	while (s[j] != 0)
		j++;
	while ((s[j - 1] == 32 || s[j - 1] == 44 || s[j - 1] == 10 || s[j - 1] == 9)
			&& j != 0)
		j--;
	if (j == 0)
		i = j;
	if (!(n = (char*)malloc(sizeof(*n) * (j - i + 1))))
		return (NULL);
	n[j - i] = 0;
	k = 0;
	while (i < j)
		n[k++] = s[i++];
	return (n);
}
