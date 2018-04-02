/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 12:20:42 by awajsbro          #+#    #+#             */
/*   Updated: 2018/04/01 16:42:02 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

t_list	*ft_lstremove(t_list **alst)
{
	t_list	*prev;
	t_list	*next;
	t_list	*ret;

	if (alst == NULL)
		return (NULL);
	ret = *alst;
	next = (*alst)->next;
	prev = (*alst)->prev;
	if (next == NULL && prev == NULL)
		;
	else if ((*alst)->next == NULL)
		prev->next = NULL;
	else if ((*alst)->prev == NULL)
		next->prev = NULL;
	else
	{
		next->prev = prev;
		prev->next = next;
	}
	(*alst)->next = NULL;
	(*alst)->prev = NULL;
	*alst = next == NULL ? prev : next;
	return (ret);
}
