# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/29 16:05:24 by cfatrane          #+#    #+#              #
#*   Updated: 2016/12/02 13:35:40 by cfatrane         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_NAME =	ft_memset.c				\
			ft_bzero.c				\
			ft_memcpy.c				\
			ft_memccpy.c			\
			ft_memmove.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_strlen.c				\
			ft_strdup.c				\
			ft_strcpy.c				\
			ft_strncpy.c			\
			ft_strcat.c				\
			ft_strncat.c			\
			ft_strlcat.c			\
			ft_strchr.c				\
			ft_strrchr.c			\
			ft_strstr.c				\
			ft_strnstr.c			\
			ft_strcmp.c				\
			ft_strncmp.c			\
			ft_atoi.c				\
			ft_isalpha.c			\
			ft_isdigit.c			\
			ft_isalnum.c			\
			ft_isascii.c			\
			ft_isprint.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_memalloc.c			\
			ft_memdel.c				\
			ft_strnew.c				\
			ft_strdel.c				\
			ft_strclr.c				\
			ft_striter.c			\
			ft_striteri.c			\
			ft_strmap.c				\
			ft_strmapi.c			\
			ft_strequ.c				\
			ft_strnequ.c			\
			ft_strsub.c				\
			ft_strjoin.c			\
			ft_strtrim.c			\
			ft_strsplit.c			\
			ft_itoa.c				\
			ft_putchar.c			\
			ft_putstr.c				\
			ft_putendl.c			\
			ft_putnbr.c				\
			ft_putchar_fd.c			\
			ft_putstr_fd.c			\
			ft_putendl_fd.c			\
			ft_putnbr_fd.c			\
			ft_lstnew.c				\
			ft_lstdelone.c			\
			ft_lstdel.c				\
			ft_lstadd.c				\
			ft_lstiter.c			\
			ft_lstmap.c				\
			get_next_line.c			\
			ft_islower.c			\
			ft_isupper.c			\
			ft_isspace.c			\
			ft_strndup.c			\
			ft_tabintlen.c			\
			ft_lstlen.c				\
			ft_count_itoa.c			\
			ft_count_words_sep.c	\
			ft_strlen_sep.c			\
			ft_strrev_itoa.c		\
			ft_swap.c				\
			ft_sqrt.c				\
			ft_range.c				\
			ft_strccpy.c			\
			ft_strcdup.c			\

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ_NAME = $(SRC_NAME:.c=.o)

all: $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -c $^

$(NAME): $(OBJ_NAME)
	@echo "Creation of $(NAME) ..."
	@ar rc $(NAME) $(OBJ_NAME)
	@ranlib $(NAME)
	@echo "$(NAME) created"

clean:
	@echo "Removal of .o files of $(NAME) ..."
	@rm -f $(OBJ_NAME)
	@echo "Files .o deleted\n"

fclean: clean
	@echo "Removal of $(NAME)..."
	@rm -f $(NAME)
	@echo "Binary $(NAME) deleted\n"

re: fclean all

.PHONY: all, clean, fclean, re

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h
