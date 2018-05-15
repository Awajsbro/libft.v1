/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:11:55 by awajsbro          #+#    #+#             */
/*   Updated: 2018/04/28 16:46:10 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdelone(t_list **alst)
{
	t_list	*prev;
	t_list	*next;

	if (alst == NULL)
		return ;
	next = (*alst)->next;
	prev = (*alst)->prev;
	if ((*alst)->next == NULL)
		prev->next = NULL;
	else if ((*alst)->prev == NULL)
		next->prev = NULL;
	else
	{
		next->prev = prev;
		prev->next = next;
	}
	(*alst)->size = 0;
	ft_memdel(&((*alst)->content));
	ft_memdel((void**)alst);
	if (next == NULL)
		*alst = prev;
	else
		*alst = next;
}
