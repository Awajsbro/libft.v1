/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:11:46 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/21 14:45:15 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst)
{
	t_list	*tmp;

	*alst = ft_lststart(*alst);
	while (*alst != NULL)
	{
		tmp = (*alst)->next;
		ft_lstdelone(alst);
		*alst = tmp;
	}
}
