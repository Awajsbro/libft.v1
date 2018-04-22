/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 10:34:40 by awajsbro          #+#    #+#             */
/*   Updated: 2018/04/22 17:12:42 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

t_list	*ft_lstcpy(t_list *lst)
{
	t_list	*cpy;

	lst = ft_lststart(lst);
	cpy = ft_lstnew(ft_strdup(lst->content), lst->size);
	while (lst->next != NULL)
	{
		lst = lst->next;
		ft_lstaddend(&cpy, ft_lstnew(ft_strdup(lst->content), lst->size));
	}
	cpy = ft_lststart(cpy);
	return (cpy);
}
