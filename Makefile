NAME	= libftprintf.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_printf.c \
		  ft_printf_utils2.c ft_printf_utils1.c \
		  specifiers1.c specifiers2.c

OBJS	= $(SRCS:.c=.o)

LIBFT_PATH	= includes/libft
LIBFT		= $(LIBFT_PATH)/libft.a

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re