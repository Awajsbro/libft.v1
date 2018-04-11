/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:11:34 by awajsbro          #+#    #+#             */
/*   Updated: 2018/04/11 15:02:56 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
	if (new == NULL)
		return ;
	*alst = ft_lstend(*alst);
	new->prev = *alst;
	if (*alst != NULL)
		(*alst)->next = new;
	*alst = new;
}
