# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/17 15:40:35 by awajsbro          #+#    #+#              #
#    Updated: 2018/01/13 16:32:49 by awajsbro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC 	= ft_isascii.c \
		ft_memchr.c \
		ft_strcat.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_isdigit.c \
		ft_memcmp.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_bzero.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_strcmp.c \
		ft_strncat.c \
		ft_strstr.c \
		ft_isalnum.c \
		ft_memmove.c \
		ft_strcpy.c \
		ft_strncmp.c \
		ft_tolower.c \
		ft_isalpha.c \
		ft_memccpy.c \
		ft_memset.c \
		ft_strdup.c \
		ft_strndup.c \
		ft_strncpy.c \
		ft_toupper.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strrealloc.c \
		ft_strdel.c \
		ft_memalloc.c \
		ft_realloc.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_joinfree.c\
		ft_strtrim.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_isspace.c \
		ft_strnlen.c \
		ft_power.c \
		ft_sqrt.c \
		ft_strclen.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstaddend.c \
		ft_lstaddstart.c \
		ft_lstend.c \
		ft_lstlen.c \
		ft_lststart.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_ptnew.c \
		ft_lstfindcont.c \
		ft_lstfindsize.c \

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	gcc -Wextra -Wall -Werror -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
