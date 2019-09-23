# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sholiak <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 18:07:28 by sholiak           #+#    #+#              #
#    Updated: 2019/05/06 16:43:03 by sholiak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = *.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(FILES)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
