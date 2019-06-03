# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmafa <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 16:27:06 by nmafa             #+#    #+#              #
#    Updated: 2019/06/03 17:16:04 by nmafa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRC = ft_putchar.c\
	  ft_putstr.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_toupper.c\
	  ft_toupper.c\
	  ft_ascii.c\
	  ft_isdigit.c\
	  ft_isalpha.c\
	  ft_isalnum.c\
	  ft_isprint.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_strlen.c\


OBJ = $(SRC: .c = .o)

all = $ (NAME)

$ = (NAME) : $ (OBJ)
			@ar rc $ (NAME) $ (OBJ)	
			@echo "$ (NAME) created"
			@ranlib	$ (NAME)
			@echo "$ (NAME) indexed"

