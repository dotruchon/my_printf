##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPool_Day11_2018 task01
##


NAME    = libmy.a

TESTS_NAME	= unit_tests

CC  = gcc

RM  = rm -f

CFLAGS = -c -I include/

CFLAGS += -W -Wall -Wextra -g --debug -lcriterion

SRCS    = src/main.c									\
	      src/get_flags.c								\
		  src/flags/c_flag.c							\
		  src/flags/d_flag.c							\
		  src/flags/i_flag.c							\
		  src/flags/o_flag.c							\
		  src/flags/p_flag.c							\
		  src/flags/s_flags.c							\
		  src/flags/u_flag.c							\
		  src/flags/x_flags.c							\
		  src/flags/b_flag.c							\
		  include/my/my_putchar.c						\
		  include/my/my_putstr.c						\
		  include/my/my_putchar_error.c					\
		  include/my/my_putstr_error.c					\
		  include/my/my_put_nbr.c						\
		  include/my/my_put_nbr_base.c					\
		  include/my/my_put_nbr_base_unsigned_long.c	\
		  include/my/my_put_unsigned_nbr.c				\
		  include/my/my_strlen.c						\

TESTS_SRC	= criterion/unit_tests_my_printf.c 

OBJS    = $(SRCS:.c=.o)

TESTS_OBJS	= $(TESTS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

unit_tests: $(TESTS_NAME)
	
$(TESTS_NAME) : $(TESTS_OBJS)
	$(CC) $(CFLAGS) $(TESTS_OBJS) -o $(TESTS_NAME)

clean:
	$(RM) $(OBJS) $(TESTS_OBJS)

fclean: clean
	$(RM) $(NAME) $(TESTS_NAME)

re: fclean all

.PHONY: all clean fclean re