/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:11:18 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/20 18:11:20 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_listd	*ft_lststart(t_listd *lst)
{
	while (lst->prev != NULL)
		lst = lst->prev;
	return (lst);
}
