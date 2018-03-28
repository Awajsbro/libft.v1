/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:30:03 by awajsbro          #+#    #+#             */
/*   Updated: 2018/03/26 15:30:15 by awajsbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stddef.h>
# include <limits.h>
# include <stdint.h>
# include <stdarg.h>
# include <wchar.h>
# include "libwr/ft_printf/ft_printf.h"
# include "liblst/liblst.h"
# include "libpt/libpt.h"

typedef unsigned long long t_ull;

/*
**			-----fonction mathematique-----
*/
# define ABS(x) ((x) = (x) >= 0 ? (x) : -(x))

int				ft_power(int nb, int p);
int				ft_sqrt(int nb);
char			ft_cntb(long long n, char base);
char			ft_ucntb(t_ull n, char base);
size_t			ft_strlen(const char *s);
size_t			ft_strclen(char const *s, int c);
size_t			ft_strnlen(const char *s, size_t maxlen);

/*
**			-----transformation----
*/
int				ft_atoi(char const *str);
char			*ft_itoa(long long n);
char			*ft_itoab(long long n, char b, char *out);
char			*ft_uitoab(unsigned long long n, char b, char *out);

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
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *haystack, const char *needle, size_t l);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);

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
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			ft_memdel(void **ap);

/*
**			-----gestion de caractere-----
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
int				ft_tolower(int c);
char			*ft_strupper(char *s);
int				ft_toupper(int c);
char			*ft_strlower(char *s);
char			*ft_revstr(char *s);
char			*ft_strtrim(char const *s);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striter(char *s, void (*f)(char*));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			**ft_strsplit(char const *s, char c);
void			ft_strclr(char *s);
void			ft_strdel(char **as);

#endif
