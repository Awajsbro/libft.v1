/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfindsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:09:49 by awajsbro          #+#    #+#             */
/*   Updated: 2018/04/01 11:50:17 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

char	ft_lstfindsize(t_list *lst, long long size)
{
	lst = ft_lststart(lst);
	while (lst->size != size && lst->next != NULL)
		lst = lst->next;
	return (lst->size == size ? 1 : 0);
}
