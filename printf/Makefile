NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_conv_num_hex.c ft_conv_ptr_hex.c ft_hexlen.c\
		ft_itoa.c ft_percentage.c ft_print_char.c ft_print_digit.c ft_print_format.c\
		ft_print_hex_lower.c ft_print_hex_upper.c ft_print_pointer.c ft_print_string_upper.c\
		ft_print_string.c ft_print_unsigned_decimal.c ft_print_void.c ft_printf.c ft_strcpy.c\
		ft_strdup.c ft_strlen.c ft_toupper.c ft_unsigned_itoa.c

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
