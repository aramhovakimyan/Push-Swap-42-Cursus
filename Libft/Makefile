NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(shell find . -name "*.c")
OBJS = $(SRCS:.c=.o)
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean re all