/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 12:13:04 by awajsbro          #+#    #+#             */
/*   Updated: 2018/06/04 10:56:33 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#define BUFF_SIZE 8

static int		ft_true_gnl(char **line, t_list *lst, int size, size_t len)
{
	char	*tmp2;

	if (((char*)lst->content)[0] == 0)
	{
		if ((size = read(lst->size, lst->content, BUFF_SIZE)) < 1)
			return (size);
		((char*)lst->content)[size] = 0;
	}
	len = ft_strclen(((char*)lst->content), '\n');
	tmp2 = ft_strndup((char*)lst->content, len);
	if (!(*line = ft_joinfree(*line, tmp2)))
		return (-1);
	ft_memmove(lst->content, lst->content + len, BUFF_SIZE - len + 1);
	if (((char*)lst->content)[0] == '\n')
	{
		len = ft_strlen((char*)lst->content);
		ft_memmove(lst->content, lst->content + 1, len);
		return (1);
	}
	return (42);
}

int				get_next_line(const int fd, char **line)
{
	t_list static	*lst = NULL;
	int				size;

	if ((fd <= 2 && fd != 0) || BUFF_SIZE < 1 || line == NULL)
		return (-1);
	if (lst == NULL)
		lst = ft_lstnew(ft_memalloc(BUFF_SIZE + 1), fd);
	else
	{
		if (ft_lstfindsize(&lst, fd) == 0)
			ft_lstaddend(&lst, ft_lstnew(ft_memalloc(BUFF_SIZE + 1), fd));
	}
	if (lst == NULL)
		return (-1);
	if (((char*)lst->content)[0] == 0)
	{
		if ((size = read(lst->size, lst->content, BUFF_SIZE)) < 1)
			return (size);
		((char*)lst->content)[size] = 0;
	}
	*line = ft_strnew(0);
	while ((size = ft_true_gnl(line, lst, 0, 0)) == 42)
		;
	return (*line[0] != 0 && size != -1 ? 1 : size);
}
