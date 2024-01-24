# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 00:40:52 by isgomez-          #+#    #+#              #
#    Updated: 2024/01/24 11:54:16 by isgomez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY	=	libft.a

CFLAGS	=	-Wall -Wextra -Werror

FILES	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_memset.c ft_bzero.c

OBJ	=	$(FILES:%.c=%.o)

RM	=	rm -f

all: $(LIBRARY)

$(LIBRARY):	$(OBJ)
	@ar rcs $@ $(OBJ)
	@echo "$(LIBRARY) created"
	@ranlib $@
	@echo "$(LIBRARY) indexed"

$(OBJ):	$(FILES)
	@gcc -c $(CFLAGS) $(FILES)

clean:
	$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(LIBRARY)
	@echo "$(LIBRARY) deleted"

re:			fclean all

.PHONY: all, clean, fclean, re