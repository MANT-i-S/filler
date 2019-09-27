# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/29 17:03:46 by sholiak           #+#    #+#              #
#    Updated: 2019/09/25 14:18:55 by sholiak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

NAME2 = ./libft/libft.a

FILES = *.c

LIBFILES = ./libft/*.c

OBJ = *.o

LIBOBJ = ./libft/*.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(LIBFILES)
	ar rcs $(NAME) $(OBJ)
	gcc -Wall -Wextra -Werror filler.c player_map_val.c take_piece.c get_next_line.c libft.a -o sholiak.filler -g
	
clean:
	rm -f $(OBJ) $(LIBOBJ)

fclean: clean
	rm -f $(NAME) $(NAME2)

re: fclean all
