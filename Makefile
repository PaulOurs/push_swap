# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paubello <paubello@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 05:05:10 by paubello          #+#    #+#              #
#    Updated: 2025/01/11 13:43:41 by paubello         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR = ./srcs/
OBJS_DIR = ./objs/

SRCS = $(SRCS_DIR)/parse.c \
            $(SRCS_DIR)/sort.c \
            $(SRCS_DIR)/utils.c \
            $(SRCS_DIR)/turk_algorithm.c \
            $(SRCS_DIR)/operators/push.c \
            $(SRCS_DIR)/operators/revrotate.c \
            $(SRCS_DIR)/operators/rotate.c \
            $(SRCS_DIR)/operators/swap.c \
            push_swap.c

OBJS = $(addprefix $(OBJS_DIR),$(notdir $(SRCS:.c=.o)))

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
