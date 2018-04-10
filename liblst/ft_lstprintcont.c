/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprintcont.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 09:45:17 by awajsbro          #+#    #+#             */
/*   Updated: 2018/04/10 13:02:41 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void	ft_lstprintcont(t_list *lst, char c)
{
	if (lst == NULL)
		return ;
	lst = ft_lststart(lst);
	while (lst->next != NULL)
	{
		ft_putstr(lst->content);
		write(1, &c, 1);
		lst = lst->next;
	}
	ft_putstr(lst->content);
	write(1, &c, 1);
}
