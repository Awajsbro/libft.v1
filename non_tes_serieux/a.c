/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 19:39:25 by awajsbro          #+#    #+#             */
/*   Updated: 2018/06/01 19:50:33 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnimp.h"

void	a(void)
{
	static int i = 0;

	ft_putnbr(i++);
	ft_putendl("  -> ici");
}