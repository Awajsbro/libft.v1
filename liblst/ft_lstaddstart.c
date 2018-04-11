/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddstart.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:11:27 by awajsbro          #+#    #+#             */
/*   Updated: 2018/04/11 15:03:18 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstaddstart(t_list **alst, t_list *new)
{
	if (new == NULL)
		return ;
	*alst = ft_lststart(*alst);
	new->next = *alst;
	if (*alst != NULL)
		(*alst)->prev = new;
	*alst = new;
}
