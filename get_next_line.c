/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 12:13:04 by awajsbro          #+#    #+#             */
/*   Updated: 2018/02/02 17:21:57 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define BUFF_SIZE 4096

static int	ft_need_more_space(char **line, t_list *lst, int size, size_t len)
{
	char	*tmp;
	char	*tmp2;

	tmp = *line;
	if (((char*)lst->content)[0] == 0)
	{
		size = read(lst->content_size, lst->content, BUFF_SIZE);
		((char*)lst->content)[size] = 0;
		if (size == -1 || size == 0)
			return (size);
	}
	len = ft_strclen(((char*)lst->content), '\n');
	tmp2 = ft_strndup((char*)lst->content, len);
	if (!(*line = ft_strjoin(tmp, tmp2)))
		return (-1);
	free(tmp);
	free(tmp2);
	ft_memmove(lst->content, lst->content + len, BUFF_SIZE - len + 1);
	if (((char*)lst->content)[0] == '\n')
	{
		len = ft_strlen((char*)lst->content);
		ft_memmove(lst->content, lst->content + 1, len);
		return (1);
	}
	return (42);
}

int			get_next_line(const int fd, char **line)
{
	t_list static	*lst = NULL;
	int				size;
	size_t			len;
	int				r;

	if ((fd <= 2 && fd != 0) || BUFF_SIZE < 1 || line == NULL)
		return (-1);
	if (lst == NULL)
		lst = ft_lstnew(ft_memalloc(BUFF_SIZE + 1), fd);
	else
	{
		lst = ft_lstfindsize(lst, fd);
		if (lst->content_size != (size_t)fd)
			ft_lstaddend(&lst, ft_lstnew(ft_memalloc(BUFF_SIZE + 1), fd));
	}
	*line = ft_strnew(0);
	r = 42;
	len = 0;
	size = 0;
	while (r == 42)
		r = ft_need_more_space(line, lst, size, len);
	return (*line[0] == 0 ? r : 1);
}
