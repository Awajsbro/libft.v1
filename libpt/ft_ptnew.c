/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 11:34:12 by awajsbro          #+#    #+#             */
/*   Updated: 2018/06/06 10:18:48 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_pt	*ft_ptnew(char *name, int x, int y, int z)
{
	t_pt *pt;

	if (!(pt = (t_pt*)malloc(sizeof(*pt))))
		return (NULL);
	pt->name = name;
	pt->x = x;
	pt->y = y;
	pt->z = z;
	return (pt);
}
