# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awajsbro <awajsbro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/17 15:40:35 by awajsbro          #+#    #+#              #
#    Updated: 2018/06/01 19:48:12 by awajsbro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCMEM	= 	libmem/ft_memalloc.c \
			libmem/ft_realloc.c \
			libmem/ft_bzero.c \
			libmem/ft_memset.c \
			libmem/ft_memcpy.c \
			libmem/ft_memmove.c \
			libmem/ft_memccpy.c \
			libmem/ft_swap.c \
			libmem/ft_memdel.c \

SRCCHAR	= 	libchar/ft_tolower.c \
			libchar/ft_toupper.c \
			libchar/ft_strjoin.c \
			libchar/ft_joinfree.c \
			libchar/ft_joinnfree.c \
			libchar/ft_swap_char.c \
			libchar/ft_revstr.c \
			libchar/ft_strcat.c \
			libchar/ft_strlcat.c \
			libchar/ft_strncat.c \
			libchar/ft_strcpy.c \
			libchar/ft_strlower.c \
			libchar/ft_strdup.c \
			libchar/ft_strndup.c \
			libchar/ft_strncpy.c \
			libchar/ft_strupper.c \
			libchar/ft_strnew.c \
			libchar/ft_strrealloc.c \
			libchar/ft_strdel.c \
			libchar/ft_strclr.c \
			libchar/ft_striter.c \
			libchar/ft_striteri.c \
			libchar/ft_strmap.c \
			libchar/ft_strmapi.c \
			libchar/ft_strsub.c \
			libchar/ft_strtrim.c \
			libchar/ft_strsplit.c \

SRCTYPE	=	libtype/ft_atoi.c \
			libtype/ft_itoa.c \
			libtype/ft_itoab.c \
			libtype/ft_uitoab.c \

SRCMATH	=	libmath/ft_strlen.c \
			libmath/ft_strnlen.c \
			libmath/ft_swap_int.c \
			libmath/ft_power.c \
			libmath/ft_sqrt.c \
			libmath/ft_cntb.c \
			libmath/ft_ucntb.c \
			libmath/ft_strclen.c \

SRCCMP	=	libcmp/ft_isascii.c \
			libcmp/ft_isdigit.c \
			libcmp/ft_isprint.c \
			libcmp/ft_isalnum.c \
			libcmp/ft_isalpha.c \
			libcmp/ft_isspace.c \
			libcmp/ft_strdigit.c \
			libcmp/ft_strequ.c \
			libcmp/ft_strnequ.c \
			libcmp/ft_istrcmp.c \
			libcmp/ft_is_in.c \
			libcmp/ft_strcmp.c \
			libcmp/ft_strncmp.c \
			libcmp/ft_strnstr.c \
			libcmp/ft_strstr.c \
			libcmp/ft_memcmp.c \
			libcmp/ft_memchr.c \
			libcmp/ft_strchr.c \
			libcmp/ft_strrchr.c \

SRCLST	=	liblst/ft_lstnew.c \
			liblst/ft_lstaddstart.c \
			liblst/ft_lstaddend.c \
			liblst/ft_lstcpy.c \
			liblst/ft_lstfindcont.c \
			liblst/ft_lstfindsize.c \
			liblst/ft_lstend.c \
			liblst/ft_lstlen.c \
			liblst/ft_lststart.c \
			liblst/ft_lstiter.c \
			liblst/ft_lstmap.c \
			liblst/ft_lstprintcont.c \
			liblst/ft_lstprintsize.c \
			liblst/ft_lstremove.c \
			liblst/ft_lstdelone.c \
			liblst/ft_lstdel.c \

SRCPT	=	libpt/ft_ptnew.c \
			libpt/ft_ptdel.c \

SRCWR	=	libwr/ft_putchar.c \
			libwr/ft_putstr.c \
			libwr/ft_putstrn.c \
			libwr/ft_putendl.c \
			libwr/ft_putendln.c \
			libwr/ft_putnbr.c \
			libwr/ft_putnbrb.c \
			libwr/ft_putchar_fd.c \
			libwr/ft_putstr_fd.c \
			libwr/ft_putstrn_fd.c \
			libwr/ft_putendl_fd.c \
			libwr/ft_putendln_fd.c \
			libwr/ft_putnbr_fd.c \
			libwr/ft_putnbrb_fd.c \
			libwr/get_next_line.c \
			libwr/ft_printf.c \
			libwr/ft_printf/ft_init_arg.c \
			libwr/ft_printf/ft_signed_buff.c \
			libwr/ft_printf/ft_unsigned_buff.c \
			libwr/ft_printf/ft_print_setup.c \
			libwr/ft_printf/ft_pars_color.c \
			libwr/ft_printf/ft_letter_buff.c \
			libwr/ft_printf/ft_wchar_pars.c \
			libwr/ft_printf/ft_wchar_supp.c \
			libwr/ft_printf/ft_length_pars.c \
			libwr/ft_printf/ft_change_color.c \
			libwr/ft_printf/ft_change_back.c \
			libwr/ft_printf/ft_print_itab.c

SRCNIMP	=	non_tes_serieux/a.c \
			non_tes_serieux/ft_coucou.c \

SRC = $(SRCPT) $(SRCWR) $(SRCLST) $(SRCCHAR) $(SRCMATH) $(SRCTYPE) $(SRCCMP) $(SRCMEM) $(SRCNIMP)

OBJ = $(notdir $(SRC:.c=.o))

OBJDIR = obj/

all : $(NAME)

$(NAME) :
	@mkdir -p $(OBJDIR)
	@gcc -Wextra -Wall -Werror -c $(SRC)
	@mv $(OBJ) $(OBJDIR)
	@ar rc $(NAME) $(addprefix $(OBJDIR), $(OBJ))
	@ranlib $(NAME)
	@echo "\033[36m	LIBFT.A\033[33m   ====\033[1m> \033[32;1mREADY TO USE\033[0m"

debug :
	@mkdir -p $(OBJDIR)
	@gcc -ggdb -Wextra -Wall -Werror -c $(SRC)
	@mv $(OBJ) $(OBJDIR)
	@ar rc $(NAME) $(addprefix $(OBJDIR), $(OBJ))
	@ranlib $(NAME)
	@echo "\033[36m	LIBFT.A\033[33m   ====\033[1m> \033[32;1mREADY TO USE\033[0m"

clean :
	@rm -rf $(OBJDIR)
	@echo "\033[31;1m	CLEANING DONE\033[0m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[36m	LIBFT.A\033[33m   ====\033[1m> \033[31;1mDELETED\033[0m"

re : fclean all
