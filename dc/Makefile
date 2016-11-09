# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/01 19:31:45 by dcognata          #+#    #+#              #
#    Updated: 2016/03/08 16:50:09 by dcognata         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -pedantic -O3 -Wall -Wextra -Werror

SRC_NAME = ft_memset.c      \
	   ft_memcpy.c      \
	   ft_memccpy.c     \
	   ft_memchr.c      \
	   ft_memmove.c     \
	   ft_memcmp.c      \
	   ft_memalloc.c    \
	   ft_bzero.c       \
	   ft_putchar.c     \
	   ft_putstr.c      \
	   ft_putendl.c     \
	   ft_putchar_fd.c  \
	   ft_putstr_fd.c   \
	   ft_putendl_fd.c  \
	   ft_strcpy.c      \
	   ft_strncpy.c     \
	   ft_strcat.c      \
	   ft_strncat.c     \
	   ft_strlcat.c     \
	   ft_strcmp.c      \
	   ft_strncmp.c     \
	   ft_strdup.c      \
	   ft_strlen.c      \
	   ft_strchr.c      \
	   ft_strrchr.c     \
	   ft_strstr.c      \
	   ft_strnstr.c     \
	   ft_isdigit.c     \
	   ft_isalnum.c     \
	   ft_isascii.c     \
	   ft_isalpha.c     \
	   ft_isprint.c     \
	   ft_tolower.c     \
	   ft_toupper.c     \
	   ft_atoi.c        \
	   ft_itoa.c        \
	   ft_putnbr.c      \
	   ft_putnbr_fd.c   \
	   ft_strclr.c      \
	   ft_strequ.c      \
	   ft_strnequ.c     \
	   ft_strjoin.c     \
	   ft_memdel.c      \
	   ft_strnew.c      \
	   ft_strdel.c      \
	   ft_striter.c     \
	   ft_striteri.c    \
	   ft_strmap.c      \
	   ft_strmapi.c     \
	   ft_strsub.c      \
	   ft_strtrim.c     \
	   ft_strsplit.c    \
	   ft_isspace.c     \
	   ft_lenint.c      \
	   ft_signint.c     \
	   ft_count_words.c \
	   ft_want_size.c   \
	   ft_abs.c         \
	   ft_lstnew.c      \
	   ft_lstdelone.c   \
	   ft_lstdel.c      \
	   ft_lstadd.c      \
	   ft_lstiter.c     \
	   ft_lstmap.c      \
	   get_next_line.c  \
	   ft_create_arrays.c

OBJ_NAME = $(SRC_NAME:%.c=%.o)

all: $(NAME)

$(NAME):
	@echo "Libft : Sources compiling..."
	@gcc $(CFLAGS) -c $(SRC_NAME)
	@ar -rc $(NAME) $(OBJ_NAME)
	@ranlib $(NAME)
	@echo  "Library compile with success !"

clean:
	@rm -f $(OBJ_NAME)
	@echo "Objects removed..."

fclean: clean
	@rm -f $(NAME)
	@echo "libft binany removed..."

re: fclean all

.PHONY: all, clean, fclean, re
