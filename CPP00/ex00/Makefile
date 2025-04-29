# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/29 17:13:11 by ruidos-s          #+#    #+#              #
#    Updated: 2025/04/29 17:13:13 by ruidos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp
OBJS = $(SRCS:%.cpp=objs/%.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


objs/%.o: %.cpp
	@mkdir -p objs
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf objs

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re