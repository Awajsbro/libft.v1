/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:10:56 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/31 13:56:21 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content, long long size)
{
	t_list	*new;

	if (!(new = malloc(sizeof(*new))))
		return (NULL);
	new->content = content;
	new->size = size;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
