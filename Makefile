NAME = push_swap

CC = gcc

CFLAGS	= -Wall -Wextra -Werror -g

LIBFT = libft 

SRCS = free.c parse.c error.c init.c swap.c push.c rotate.c \
		normalise.c reverse_rotate.c utils.c algo.c \
		position.c moves.c check_int.c main.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: lib $(NAME)

lib:
	@make -C $(LIBFT)

%.o:%.c
		$(CC) $(CFLAGS) -I ./libft -o $@ -c $<

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -L $(LIBFT) -o $@ $^ -lft

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	@make -C $(LIBFT) fclean

re: fclean all