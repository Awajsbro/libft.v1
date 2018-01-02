/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfindcont.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:12:10 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/21 14:48:14 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfindcont(t_list *lst, void *content)
{
	lst = ft_lststart(lst);
	while (lst->content != content && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
