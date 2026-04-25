NAME        = libftprintf.a
LIBFT       = libft
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I. -I$(LIBFT)
RM          = rm -f
AR          = ar rcs

SRCS        = ft_printf.c \
              ft_eval_format.c \
              ft_print_char.c \
              ft_print_string.c \
              ft_print_nbr.c \
              ft_print_unint.c \
              ft_print_hex.c \
              ft_print_ptr.c

OBJS        = $(SRCS:.c=.o)

# --- Rules ---

all: $(NAME)


$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT)
	cp $(LIBFT)/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT) clean


fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT) fclean


re: fclean all

.PHONY: all clean fclean re