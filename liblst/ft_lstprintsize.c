/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprintsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 11:36:32 by awajsbro          #+#    #+#             */
/*   Updated: 2018/04/10 13:18:03 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void	ft_lstprintsize(t_list *lst, char c)
{
	if (lst == NULL)
		return ;
	lst = ft_lststart(lst);
	while (lst->next != NULL)
	{
		ft_putnbr(lst->size);
		write(1, &c, 1);
		lst = lst->next;
	}
	ft_putnbr(lst->size);
	write(1, &c, 1);
}
