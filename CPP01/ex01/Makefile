# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/29 17:13:07 by ruidos-s          #+#    #+#              #
#    Updated: 2025/05/03 12:05:51 by ruidos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie_horde
SRCS = main.cpp  Zombie.cpp zombieHorde.cpp
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

valgrind:
	valgrind ./$(NAME)

.PHONY: all clean fclean re