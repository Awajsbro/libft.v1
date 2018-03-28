/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:28:22 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/28 14:38:02 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLST_H
# define LIBLST_H
# include "../libft.h"

/*
**			-----gestion des liste doublement chainee-----
*/
typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;

t_list			*ft_lstnew(void *content, size_t content_size);
void			ft_lstaddstart(t_list **alst, t_list *new);
void			ft_lstaddend(t_list **alst, t_list *new);
t_list			*ft_lststart(t_list *lst);
t_list			*ft_lstend(t_list *lst);
t_list			*ft_lstfindcont(t_list *lst, void *content);
t_list			*ft_lstfindsize(t_list *lst, size_t size);
size_t			ft_lstlen(t_list *lst);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstdelone(t_list **alst);
void			ft_lstdel(t_list **alist);

#endif
