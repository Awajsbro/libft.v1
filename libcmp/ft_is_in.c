/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_in.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 18:46:12 by awajsbro          #+#    #+#             */
/*   Updated: 2018/06/01 19:48:45 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	ft_is_in(void *content, char size_of, void **tab, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
		if (!ft_memcmp(content, tab[i], size_of))
			return (1);
	return (0);
}
