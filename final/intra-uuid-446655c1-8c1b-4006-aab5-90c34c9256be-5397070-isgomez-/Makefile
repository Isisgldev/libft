# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 00:40:52 by isgomez-          #+#    #+#              #
#    Updated: 2024/02/05 22:49:54 by isgomez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CFLAGS	=	-Wall -Wextra -Werror

FILES	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c \
				ft_toupper.c ft_tolower.c ft_strlen.c ft_strncmp.c \
				ft_strchr.c ft_strrchr.c ft_memset.c ft_bzero.c ft_strlcpy.c \
				ft_strlcat.c ft_strnstr.c ft_memcpy.c ft_memmove.c \
				ft_memchr.c ft_memcmp.c ft_atoi.c ft_calloc.c ft_strdup.c \
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c

OBJ	=	$(FILES:%.c=%.o)

RM	=	rm -f

all: $(NAME)

$(NAME):	$(OBJ)
	@ar rcs $@ $(OBJ)
	@echo "$(NAME) created"
	@ranlib $@
	@echo "$(NAME) indexed"

$(OBJ):	$(FILES)
	@gcc -c $(CFLAGS) $(FILES)

clean:
	$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(NAME)
	@echo "$(NAME) deleted"

re:			fclean all

.PHONY: all, clean, fclean, re