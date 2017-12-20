/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfindsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:09:49 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/20 18:17:01 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_listd	*ft_lstfindsize(t_listd *lst, size_t size)
{
	lst = ft_lststart(lst);
	while (lst->content_size != size && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
