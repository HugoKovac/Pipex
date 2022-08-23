# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/27 10:39:42 by hkovac            #+#    #+#              #
#    Updated: 2021/12/28 14:35:14 by hkovac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

FLAGS = -Wall -Wextra -Werror

SRCS = main.c pipex.c tools.c

LIBFT = placeholder

.PHONY = $(LIBFT)

BINS = $(SRCS:.c=.o)
all : $(LIBFT) $(NAME)

$(NAME) : $(BINS)
	gcc $(FLAGS) -o $@ $^ -Ilibft  -Llibft -lft

$(LIBFT):
	@make -C libft/ lib

%.o:%.c
	gcc $(FLAGS) -c -o $@ $< -I includes/ -I libft/ 

clean:
	rm -rf $(BINS) $(BINS_LIB)
	make -C libft/ clean

fclean: clean
	rm -rf $(NAME)
	make -C libft/ fclean

re: fclean all