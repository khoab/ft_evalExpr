# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 17:14:17 by kbui              #+#    #+#              #
#    Updated: 2018/06/02 21:34:01 by kbui             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -c -Wall -Werror -Wextra

SRCS = $(wildcard srcs/*.c)

HEADER_DIR = includes

obj = *.o

NAME = eval_expr

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -I$(HEADER_DIR)
	$(CC) $(obj) -o $(NAME)

clean:
	/bin/rm -f $(obj)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
