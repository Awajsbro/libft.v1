/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coucou.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 19:41:31 by awajsbro          #+#    #+#             */
/*   Updated: 2018/06/01 19:52:19 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnimp.h"

void	ft_coucou(void)
{
	static int i = 0;

	ft_putnbr(i++);
	ft_putendl(" --> coucou");
}
