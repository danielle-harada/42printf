# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/16 22:10:34 by dteixeir          #+#    #+#              #
#    Updated: 2021/04/16 22:18:44 by dteixeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = *.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ft_printf.h

all: $(NAME)

$(NAME): $(INCLUDES)
	@gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

git:
		git add .
		git commit -m "updating"
		git push origin master

clean:
		rm -f $(OBJ) a.out

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re
