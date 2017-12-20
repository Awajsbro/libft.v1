/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:30:03 by awajsbro          #+#    #+#             */
/*   Updated: 2017/12/20 18:04:19 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

/*
**			-----fonction mathematique-----
*/
int				ft_power(int nb, int p);
int				ft_sqrt(int nb);

/*
**			-----transformation----
*/
int				ft_atoi(char const *str);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_itoa(int n);

/*
**			-----verification / comparaison-----
*/
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_isspace(int c);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);

/*
**			-----ecriture / lecture-----
*/
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/*
**			-----gestion de memoire-----
*/
void			*ft_memalloc(size_t size);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			ft_memdel(void **ap);

/*
**			-----gestion de chaine de caractere-----
*/
char			*ft_strnew(size_t size);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strchr(const char *s, int c);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strdup(char const *s1);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *s);
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, char const *src, size_t len);
char			*ft_strnstr(const char *haystack, const char *needle, size_t l);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char*));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
size_t			ft_strclen(char const *s, int c);
size_t			ft_strnlen(const char *s, size_t maxlen);
void			ft_strdel(char **as);

/*
**			-----structure point-----
*/

/*
**typedef struct	s_pt
**{
**	int				x;
**	int				y;
**	int				z;
**}				t_pt;
**
**t_pt			ft_ptnew(int x, int y, int z);
**int			ft_columval(int index, lencol);
**int			ft_ligneval(int index, lencol);
*/

/*
**			-----gestion des liste doublement chainee-----
*/
typedef struct	s_listd
{
	void			*content;
	size_t			content_size;
	struct s_listd	*next;
	struct s_listd	*prev;
}				t_listd;

t_listd			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstaddstart(t_listd **alst, t_listd *new);
void			ft_lstaddend(t_listd **alst, t_listd *new);
t_listd			*ft_lststart(t_listd *lst);
t_listd			*ft_lstend(t_listd *lst);
t_listd			*ft_lstfindcont(t_listd *lst, void *content);
t_listd			*ft_lstfindsize(t_listd *lst, size_t size);
size_t			ft_lstlen(t_listd *lst);
void			ft_lstiter(t_listd *lst, void (*f)(t_listd *elem));
t_listd			*ft_lstmap(t_listd *lst, t_listd *(*f)(t_listd *elem));
void			ft_lstdelone(t_listd **alst);
void			ft_lstdel(t_listd **alist);

#endif
