/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:10:56 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/20 18:10:57 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_listd	*ft_lstnew(void	const *content, size_t content_size)
{
	t_listd	*new;

	if (!(new = malloc(sizeof(*new))))
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	new->content = ft_memalloc(content_size);
	ft_memcpy(new->content, content, content_size);
	new->content_size = content_size;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
