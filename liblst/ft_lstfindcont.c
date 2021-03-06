/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfindcont.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:12:10 by awajsbro          #+#    #+#             */
/*   Updated: 2018/10/14 17:36:14 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

char	ft_lstfindcont(t_list **lst, void *content)
{
	char r;

	(*lst) = ft_lststart((*lst));
	while ((r = ft_strequ((*lst)->content, content)) == 0
		&& (*lst)->next != NULL)
		(*lst) = (*lst)->next;
	return (r);
}
