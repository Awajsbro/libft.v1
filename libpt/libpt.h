/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libpt.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:26:40 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/28 14:38:55 by awajsbro         ###   ########.fr       */
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
	int				x;
	int				y;
	int				z;
}				t_pt;

t_pt			*ft_ptnew(int x, int y, int z);

#endif
