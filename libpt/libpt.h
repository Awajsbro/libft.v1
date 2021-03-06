/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libpt.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:26:40 by awajsbro          #+#    #+#             */
/*   Updated: 2018/05/29 18:12:17 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPT_H
# define LIBPT_H

# include "../libft.h"

/*
**			-----structure point-----
*/
typedef struct	s_pt
{
	char			*name;
	int				x;
	int				y;
	int				z;
}				t_pt;

t_pt			*ft_ptnew(char *name, int x, int y, int z);
void			ft_ptdel(t_pt **pt);

#endif
