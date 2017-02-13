# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/29 16:05:24 by cfatrane          #+#    #+#              #
#*   Updated: 2017/02/13 16:58:40 by cfatrane         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

# Binary

NAME = libft.a

# Path

OBJ_PATH = ./objs/

# Name

SRC_NAME =	ft_memset.c				\
			ft_bzero.c				\
			ft_memcpy.c				\
			ft_memccpy.c			\
			ft_memmove.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_memalloc.c			\
			ft_memdel.c				\
			ft_strlen.c				\
			ft_strdup.c				\
			ft_strndup.c			\
			ft_strdup_c.c			\
			ft_strcpy.c				\
			ft_strncpy.c			\
			ft_strcpy_c.c			\
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
			ft_atol.c				\
			ft_atoll.c				\
			ft_atou.c				\
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
			ft_itoa_base.c			\
			ft_putchar.c			\
			ft_putchar_fd.c			\
			ft_putstr.c				\
			ft_putstr_n.c			\
			ft_putstr_fd.c			\
			ft_putendl.c			\
			ft_putendl_fd.c			\
			ft_putnbr.c				\
			ft_putnbr_fd.c			\
			ft_putnbr_n.c			\
			ft_putnbr_base.c		\
			ft_putnbr_lng.c			\
			ft_putnbr_uns.c			\
			ft_isalpha.c			\
			ft_isdigit.c			\
			ft_isalnum.c			\
			ft_isascii.c			\
			ft_isprint.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_islower.c			\
			ft_isspace.c			\
			ft_isupper.c			\
			ft_isxdigit.c			\
			ft_isupphexa.c			\
			ft_islowhexa.c			\
			ft_isalhexa.c			\
			ft_lstnew.c				\
			ft_lstdelone.c			\
			ft_lstdel.c				\
			ft_lstadd.c				\
			ft_lstiter.c			\
			ft_lstmap.c				\
			ft_create_elem.c		\
			ft_list_push_back.c		\
			ft_list_push_front.c	\
			ft_list_size.c			\
			ft_list_last.c			\
			ft_list_push_params.c	\
			ft_list_clear.c			\
			ft_list_at.c			\
			ft_list_reverse.c		\
			ft_list_foreach.c		\
			ft_list_foreach_if.c	\
			ft_list_find.c			\
			ft_list_remove_if.c		\
			ft_list_merge.c			\
			ft_list_sort.c			\
			ft_list_reverse_fun.c	\
			get_next_line.c			\
			ft_abs.c				\
			ft_putwchar.c			\
			ft_putwstr.c			\
			ft_putwstr_n.c			\
			ft_wcharlen.c			\
			ft_strwlen.c			\
			ft_strwlen_n.c			\
			ft_print_hex.c			\
			ft_swap_bits.c			\
			ft_print_bits.c			\
			ft_max.c				\
			ft_min.c				\
			ft_tabintlen.c			\
			ft_strnew_two.c			\
			ft_strnew_three.c		\
			ft_tabnew.c				\
			ft_tabnew_two.c			\
			ft_tabnew_three.c		\
			ft_nbrlen.c				\
			ft_nbrlen_binary.c		\
			ft_nbrlen_octal.c		\
			ft_nbrlen_hexa.c		\
			ft_nbrlen_uns.c			\
			ft_nbrcmp.c				\
			ft_nbcmp_min.c			\
			ft_nbcmp_max.c			\
			ft_iseven.c				\
			ft_ismultiple.c			\
			ft_size_tab_base.c		\
			ft_count_words_sep.c	\
			ft_strlen_sep.c			\
			ft_strrev.c				\
			ft_swap.c				\
			ft_sqrt.c				\
			ft_range.c				\
			ft_hex_to_dec.c			\

OBJ_NAME = $(SRC_NAME:.c=.o)

# Files

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

# Flags

CC = gcc $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror

# Rules

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[34mCreation of $(NAME) ...\033[0m"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32m$(NAME) created\n\033[0m"

$(OBJ_PATH)%.o: %.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

clean:
	@echo "\033[33mRemoval of .o files of $(NAME) ...\033[0m"
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\n\033[0m"

fclean: clean
	@echo "\033[33mRemoval of $(NAME)...\033[0m"
	@rm -f $(NAME)
	@echo "\033[31mBinary $(NAME) deleted\n\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h
