/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:11:46 by awajsbro          #+#    #+#             */
/*   Updated: 2018/04/10 16:31:40 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdel(t_list **alst)
{
	t_list	*tmp;

	if (alst == NULL)
		return ;
	*alst = ft_lststart(*alst);
	while (*alst != NULL)
	{
		tmp = (*alst)->next;
		ft_bzero((*alst)->content, ft_strlen((*alst)->content));
		free((*alst)->content);
		free(*alst);
		*alst = tmp;
	}
}
