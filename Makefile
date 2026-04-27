NAME        = libftprintf.a
LIBFT_DIR   = libft
LIBFT_LIB   = $(LIBFT_DIR)/libft.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I. -I$(LIBFT_DIR)
RM          = rm -f
AR          = ar rcs
HEADER      = ft_printf.h

SRCS        = ft_printf.c \
              ft_print_char.c \
              ft_print_string.c \
              ft_print_nbr.c \
              ft_print_unint.c \
              ft_print_hex.c \
              ft_print_ptr.c

OBJS        = $(SRCS:.c=.o)

# Default target
all: $(NAME)

# Target to compile libft if it doesn't exist or needs updating
$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR)

# libftprintf.a depends on the printf objects AND the compiled libft.a
$(NAME): $(LIBFT_LIB) $(OBJS)
	cp $(LIBFT_LIB) $(NAME)
	$(AR) $(NAME) $(OBJS)

# Header tracking included
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re