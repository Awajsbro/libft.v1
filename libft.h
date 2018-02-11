/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:30:03 by awajsbro          #+#    #+#             */
/*   Updated: 2018/02/08 19:41:50 by awajsbro         ###   ########.fr       */
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
char			ft_cntb(long long n, char base);

/*
**			-----transformation----
*/
int				ft_atoi(char const *str);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_itoa(long n);
char			*ft_itoab(long n, int b);

/*
**			-----verification / comparaison-----
*/
char			ft_isalnum(int c);
char			ft_isalpha(int c);
char			ft_isascii(int c);
char			ft_isdigit(int c);
char			ft_isprint(int c);
char			ft_isspace(int c);
char			ft_strequ(char const *s1, char const *s2);
char			ft_strnequ(char const *s1, char const *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);

/*
**			-----ecriture / lecture-----
*/
char			ft_putchar(char c);
size_t			ft_putstr(char const *s);
size_t			ft_putstrn(char const *s, size_t len);
size_t			ft_putendl(char const *s);
size_t			ft_putendln(char const *s, size_t len);
size_t			ft_putnbr(long long n);
size_t			ft_putnbrb(long long n, char b);
char			ft_putchar_fd(char c, int fd);
size_t			ft_putstr_fd(char const *s, int fd);
size_t			ft_putstrn_fd(char const *s, int fd, size_t len);
size_t			ft_putendl_fd(char const *s, int fd);
size_t			ft_putendln_fd(char const *s, int fd, size_t len);
size_t			ft_putnbr_fd(long long n, int fd);
size_t			ft_putnbrb_fd(long long n, int fd, char b);
int				get_next_line(int fd, char **line);

/*
**			-----gestion de memoire-----
*/
void			*ft_memalloc(size_t size);
void			*ft_realloc(void *s, size_t size);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			ft_memdel(void **ap);

/*
**			-----gestion de chaine de caractere-----
*/
char			*ft_strnew(size_t size);
char			*ft_strrealloc(char *s, size_t len);
char			*ft_strdup(char const *s1);
char			*ft_strndup(char const *s1, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_joinfree(char *s1, char *s2);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, char const *src, size_t len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *s);
size_t			ft_strclen(char const *s, int c);
size_t			ft_strnlen(const char *s, size_t maxlen);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *haystack, const char *needle, size_t l);
char			*ft_strtrim(char const *s);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striter(char *s, void (*f)(char*));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			**ft_strsplit(char const *s, char c);
void			ft_strclr(char *s);
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
*/

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
