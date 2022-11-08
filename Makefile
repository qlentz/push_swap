NAME = pushswap

CC = gcc

CFLAGS	= -Wall -Wextra -Werror

LIBFT = libft 

SRCS = main.c

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