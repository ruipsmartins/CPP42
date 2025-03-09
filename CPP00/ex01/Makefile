
NAME = megaphone
SRCS = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS:=.o)
	$(CC) $(CFLAGS) $(SRCS:=.o) -o $(NAME)

clean:
	rm -fr $(SRCS:=.o)

fclean: clean
	rm -fr $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re