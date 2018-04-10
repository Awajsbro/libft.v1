/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:10:44 by awajsbro          #+#    #+#             */
/*   Updated: 2018/04/10 18:08:59 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_lstlen(t_list *lst)
{
	size_t	i;

	if (lst == NULL)
		return (0);
	i = 1;
	while (lst->prev != NULL)
		lst = lst->prev;
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
