#### Variables ####
NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

#### Rules ####
# Declares rules
.PHONY: all clean fclean re

# Compiles project
all: $(NAME)

# Creates library
$(NAME): ft_printf.h $(OBJS)
	ar -r $(NAME) $(OBJS)

# Cleans tmp files
clean:
	rm -f $(OBJS)

# Cleans tmp files and library
fclean: clean
	rm -f $(NAME)

re: fclean all

