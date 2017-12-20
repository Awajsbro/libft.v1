/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:11:34 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/20 18:11:38 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_listd **alst, t_listd *new)
{
	if (new == NULL)
		return ;
	new->prev = *alst;
	(*alst)->next = new;
	*alst = new;
}
