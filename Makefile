#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/24 20:12:41 by mdelage           #+#    #+#              #
#    Updated: 2013/12/31 20:16:16 by mdelage          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CPATH = srcs
HPATH = includes

NAME = libft.a

CC = /usr/bin/gcc
AR = /usr/bin/ar
RANLIB = /usr/bin/ranlib
RM = /bin/rm
CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c \
	ft_bzero.c \
	ft_free_tab.c \
	ft_func.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_lib.c \
	ft_lst_push_back.c \
	ft_lstadd.c \
	ft_lstdel.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_memset.c \
	ft_nbrlen.c \
	ft_printf.c \
	ft_put_sc.c \
	ft_putbase.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl.c \
	ft_putendl_c.c \
	ft_putendl_fd.c \
	ft_putlong.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putpoint.c \
	ft_putstr.c \
	ft_putstr_c.c \
	ft_putstr_fd.c \
	ft_res.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strclr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strdel.c \
	ft_strdup.c \
	ft_strequ.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strsplit.c \
	ft_strstr.c \
	ft_strsub.c \
	ft_strtrim.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_which_param.c \
	get_next_line.c

CFILES = $(patsubst %,$(CPATH)/%,$(SRC))
OFILES = $(patsubst %.c,%.o,$(CFILES))

all: $(NAME)

$(NAME): $(OFILES)
	@echo "Building $(NAME)"
	@$(AR) rc $(NAME) $^
	@$(RANLIB) $(NAME)

%.o: %.c
	@echo "Creating file $@"
	@$(CC) -I $(HPATH) $(CFLAGS) -c $^ -o $@

clean:
	@echo "Deletion of building files"
	@$(RM) -f $(OFILES)

fclean: clean
	@echo "Deletion of $(NAME)"
	@$(RM) -f $(NAME)

re: fclean all
