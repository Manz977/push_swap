# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manarmonzer <manarmonzer@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/17 12:58:21 by mamonzer          #+#    #+#              #
#    Updated: 2026/01/01 18:39:05 by manarmonzer      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap

SRCS = input_check_utils.c \
        input_check.c \
        helper_functions.c \
        the_is_functions.c \
        substr.c \
        indexing.c \
        parsing.c \
        push.c \
        split.c \
        reverse_r.c \
        rotation.c \
        swap.c \
        tiny_sort.c \
        b_sort.c \
        main.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re