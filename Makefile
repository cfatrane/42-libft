# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/29 16:05:24 by cfatrane          #+#    #+#              #
#*   Updated: 2017/01/21 14:23:27 by cfatrane         ###   ########.fr       *#
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
			ft_isxdigit.c			\
			ft_isupphexa.c			\
			ft_islowhexa.c			\
			ft_isalhexa.c			\
			ft_strndup.c			\
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
			ft_tabintlen.c			\
			ft_strnew_two.c			\
			ft_strnew_three.c		\
			ft_tabnew_two.c			\
			ft_tabnew_three.c		\
			ft_nbrlen.c				\
			ft_nbrlen_binary.c		\
			ft_nbrlen_octal.c		\
			ft_nbrlen_hexa.c		\
			ft_nbrlen_uns.c			\
			ft_nbcmp_min.c			\
			ft_nbcmp_max.c			\
			ft_lstlen.c				\
			ft_count_itoa.c			\
			ft_putnbr_base.c		\
			ft_putnbr_lng.c			\
			ft_putnbr_uns.c			\
			ft_itoa_base.c			\
			ft_size_tab_base.c		\
			ft_count_words_sep.c	\
			ft_strlen_sep.c			\
			ft_strrev.c				\
			ft_strrev_itoa.c		\
			ft_swap.c				\
			ft_sqrt.c				\
			ft_range.c				\
			ft_strcpy_c.c			\
			ft_strdup_c.c			\
			ft_putstr_n.c			\
			ft_putnbr_n.c			\
			ft_hex_to_dec.c			\

OBJ_PATH = ./objs/

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

CC = gcc $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Creation of $(NAME) ..."
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(NAME) created\n"

$(OBJ_PATH)%.o: %.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

clean:
	@echo "Removal of .o files of $(NAME) ..."
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
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
