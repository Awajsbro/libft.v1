/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:11:05 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/20 18:16:37 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_listd	*ft_lstmap(t_listd *lst, t_listd *(*f)(t_listd *elem))
{
	t_listd	*new;
	t_listd	*tmp;

	lst = ft_lststart(lst);
	if (lst == NULL)
		return (NULL);
	new = ft_lstnew((f(lst))->content, (f(lst))->content_size);
	if (lst->next == NULL)
		return (new);
	else
	{
		tmp = ft_lstmap(lst->next, f);
		ft_lstaddstart(&tmp, new);
	}
	return (new);
}
