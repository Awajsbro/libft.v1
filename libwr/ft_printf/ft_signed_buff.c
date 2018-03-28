/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signed_buff.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 16:36:44 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/20 15:52:06 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define M_DIEZE		0x01
#define M_NDIEZE 	0xfe
#define M_MINUS		0x02
#define M_NMINUS	0xfd
#define M_MORE		0x04
#define M_NMORE		0xfb
#define M_SPACE		0x08
#define M_NSPACE	0xf7
#define M_ZERO		0x10
#define M_NZERO		0xef

static int	ft_end_buff_deci(long long n, t_arg *arg, char *buff, char *out)
{
	if (arg->acc > 0)
		ft_fill(buff, "0", arg->acc);
	else if (arg->acc == 0)
		;
	else if ((arg->flg & M_ZERO) == M_ZERO && arg->wth > 0)
		ft_fill(buff, "0", arg->wth);
	ft_itoab(n, 10, out);
	if (n < 0)
		ft_fill(buff, &out[1], 0);
	else if (n != 0 || arg->acc != 0)
		ft_fill(buff, out, 0);
	if ((arg->wth > 0 && (arg->flg & M_MINUS) == M_MINUS)
		&& ((arg->flg & M_ZERO) != M_ZERO || arg->acc > 0))
		ft_fill(buff, " ", arg->wth);
	ft_fill(buff, NULL, 0);
	return (ft_putstr_fd(buff, arg->fd));
}

int			ft_buff_deci(long long n, t_arg *arg, char cnt, int len)
{
	char	buff[len + 1];
	char	out[cnt + 1];

	if (M_SPACE == (M_SPACE & arg->flg))
	{
		ft_fill(buff, " ", 1);
		(arg->wth)--;
	}
	if ((arg->flg & M_MINUS) != M_MINUS && arg->wth > 0
		&& (arg->acc >= 0 || (arg->flg & M_ZERO) != M_ZERO))
		ft_fill(buff, " ", arg->wth);
	if (n < 0)
		ft_fill(buff, "-", 1);
	else if ((arg->flg & M_MORE) == M_MORE)
		ft_fill(buff, "+", 1);
	return (ft_end_buff_deci(n, arg, buff, out));
}
