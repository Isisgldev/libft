# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 00:40:52 by isgomez-          #+#    #+#              #
#    Updated: 2024/01/17 18:24:19 by isgomez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY	=	libft.a

CFLAGS	=	-Wall -Wextra -Werror

FILES	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_toupper.c ft_tolower.c

OBJ	=	$(FILES:%.c=%.o)

RM	=	rm -f

all: $(LIBRARY)

$(LIBRARY):	$(OBJ)
	@ar rcs $@ $(OBJ)
	@echo "$(LIBRARY) created"
	@ranlib $@
	@echo "$(LIBRARY) indexed"

$(OBJ):	$(FILES)
	@gcc -c $(FLAG) $(FILES)

clean:
	$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(LIBRARY)
	@echo "$(LIBRARY) deleted"

re:			fclean all

.PHONY: all, clean, fclean, re