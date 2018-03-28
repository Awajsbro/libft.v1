/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:11:05 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/26 16:22:12 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

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
