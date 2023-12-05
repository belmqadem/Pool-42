# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 21:01:38 by abel-mqa          #+#    #+#              #
#    Updated: 2023/10/04 21:01:56 by abel-mqa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_map.c srcs/main.c srcs/ft_str.c srcs/ft_algo.c srcs/help.c srcs/ft_readstdin.c
OBJS = $(SRC:.c=.o)
NAME = bsq
CC = gcc
INCLUDES = includes
FLAGS = -Wall -Werror -Wextra

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@ -I$(INCLUDES)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) -I$(INCLUDES)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re
