/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfindcont.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:12:10 by awajsbro          #+#    #+#             */
/*   Updated: 2018/06/04 10:55:15 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

char	ft_lstfindcont(t_list **lst, void *content)
{
	char r;

	(*lst) = ft_lststart((*lst));
	while ((r = ft_strequ((*lst)->content, content)) == 0 && (*lst)->next != NULL)
		(*lst) = (*lst)->next;
	return (r);
}
