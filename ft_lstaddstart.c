/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddstart.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:11:27 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/21 14:45:07 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddstart(t_list **alst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *alst;
	(*alst)->prev = new;
	*alst = new;
}
