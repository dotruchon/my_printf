##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPool_Day11_2018 task01
##


NAME    = my_printf

CC  = gcc

RM  = rm -f

CFLAGS = -I ./include/

CFLAGS += -W -Wall -Wextra -g --debug

SRCS    = src/main.c						\
	      src/my_printf.c					\
	      src/get_flags.c					\
		  src/flags/c_flag.c				\
		  src/flags/d_flag.c				\
		  src/flags/i_flag.c				\
		  src/flags/o_flag.c				\
		  src/flags/p_flag.c				\
		  src/flags/s_flags.c				\
		  src/flags/u_flag.c				\
		  src/flags/x_flags.c				\
		  src/flags/b_flag.c				\
		  include/my/my_putchar.c			\
		  include/my/my_putstr.c			\
		  include/my/my_put_nbr.c			\
		  include/my/my_put_nbr_base.c		\
		  include/my/my_put_nbr_base_long.c	\
		  include/my/my_put_unsigned_nbr.c	\
		  include/my/my_strlen.c


OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re