# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paubello <paubello@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 05:05:10 by paubello          #+#    #+#              #
#    Updated: 2024/12/06 05:06:00 by paubello         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = CC
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
