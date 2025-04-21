NAME = teste

SRCS = 44_9_Operator_Overloading.cpp
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