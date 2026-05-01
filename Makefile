NAME        = libftprintf.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -g -MMD -MP -I.
RM          = rm -f
AR          = ar rcs

OBJ_DIR     = obj

SRCS        = ft_printf.c \
              ft_print_char.c \
              ft_print_string.c \
              ft_print_nbr.c \
              ft_print_unint.c \
              ft_print_hex.c \
              ft_print_ptr.c \
			  printf_utils.c

OBJS        = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
DEPS        = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.d))

all: $(NAME)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
-include $(DEPS)