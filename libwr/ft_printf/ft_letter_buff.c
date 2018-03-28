/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_letter_buff.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:04:25 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/21 18:03:27 by awajsbro         ###   ########.fr       */
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

static int	ft_letter_buff(char *s, t_arg *arg, int len)
{
	char	buff[len + 1];

	if ((arg->flg & M_MINUS) != M_MINUS && arg->wth > 0)
	{
		if ((arg->flg & M_ZERO) != M_ZERO)
			ft_fill(buff, " ", arg->wth);
		else
			ft_fill(buff, "0", arg->wth);
	}
	if (s[0] == 0 && arg->spe == 'c')
		ft_fill(buff, "\0", 1);
	else
		ft_fill(buff, s, 0);
	if ((arg->flg & M_MINUS) == M_MINUS && arg->wth > 0)
		ft_fill(buff, " ", arg->wth);
	ft_fill(buff, NULL, 0);
	return (write(arg->fd, buff, len));
}

int			ft_str_pars(char *s, t_arg *arg)
{
	int		cnt;
	char	cpy[ft_strlen(s) + 1];
	char	nullstr[7];

	if (s == NULL)
	{
		ft_strcpy(nullstr, "(null)");
		cnt = arg->acc < 0 ? 6 : ft_strnlen(nullstr, arg->acc);
		nullstr[cnt] = 0;
	}
	else
	{
		if (arg->acc < 0 || arg->spe == 'C' || arg->spe == 'c')
			cnt = ft_strlen(s);
		else
			cnt = ft_strnlen(s, arg->acc);
		ft_strncpy(cpy, s, cnt);
	}
	arg->wth = arg->wth - cnt;
	arg->wth = arg->wth < 0 ? 0 : arg->wth;
	if (s == NULL)
		return (ft_letter_buff(nullstr, arg, (cnt + arg->wth)));
	return (ft_letter_buff(cpy, arg, (cnt + arg->wth)));
}

int			ft_letter_pars(int c, t_arg *arg)
{
	char	s[2];

	s[0] = c + 0;
	s[1] = 0;
	arg->wth = arg->wth - 1;
	arg->wth = arg->wth < 0 ? 0 : arg->wth;
	return (ft_letter_buff(s, arg, 1 + arg->wth));
}
