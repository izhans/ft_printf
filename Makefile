#### Variables ####
NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Werror -Wextra

SRCS =	ft_printf.c		\
		ft_putchar.c	\
		ft_putstr.c		\
		ft_putaddr.c	\
		ft_putnbr.c		\
		ft_putunbr.c	\
		ft_putnbr_hex.c	\
		utils.c			\

OBJS = $(SRCS:.c=.o)

#### Rules ####
# Declares rules
.PHONY: all clean fclean re

# Compiles project
all: $(NAME)

# Creates library
$(NAME): ft_printf.h $(OBJS)
	ar -r $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

# Cleans tmp files
clean:
	rm -f $(OBJS)

# Cleans tmp files and library
fclean: clean
	rm -f $(NAME)

re: fclean all

