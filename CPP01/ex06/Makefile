
NAME = harl_filter

SRCS = main.cpp \
	   Harl.cpp \

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
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=no ./$(NAME) example.txt Shadow Whiskers

.PHONY: all clean fclean re