# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmafa <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 16:27:06 by nmafa             #+#    #+#              #
#    Updated: 2019/06/23 18:25:58 by nmafa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRC = ft_putchar.c\
	  ft_putstr.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl.c\
	  ft_putendl_fd.c\
	  ft_putnbr.c\
	  ft_putnbr_fd.c\
	  ft_toupper.c\
	  ft_toupper.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_isalpha.c\
	  ft_isalnum.c\
	  ft_isprint.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_strlen.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_strdup.c\
	  ft_memchr.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memalloc.c\
	  ft_memmove.c\
	  ft_memdel.c\
	  ft_memcmp.c\
	  ft_strdel.c\
	  ft_strnew.c\
	  ft_strclr.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strmap.c\
	  ft_strmapi.c\


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re

n:
	norminette ft_i*.c
	norminette ft_s*.c
	norminette ft_p*.c
	norminette ft_m*.c
	norminette ft_a*.c
	norminette ft_b*.c
	norminette ft_t*.c
	norminette libft.h
