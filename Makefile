##
## EPITECH PROJECT, 2018
## makefile libmy
## File description:
## task1
##

LIB_NAME = 	my

LIB =		"lib$(LIB_NAME).a"

HEADER =	"$(LIB_NAME).h"

TEST =		"test"

SRCS	=   src/my_printf.c									\
			src/flags/c_flag.c								\
			src/flags/d_flag.c								\
			src/flags/i_flag.c								\
			src/flags/o_flag.c								\
			src/flags/p_flag.c								\
			src/flags/s_flags.c								\
			src/flags/u_flag.c								\
			src/flags/x_flags.c								\
			src/flags/b_flag.c								\
			src/my/my_atoi.c								\
			src/my/my_putchar.c								\
			src/my/my_putstr.c								\
			src/my/my_revstr.c								\
			src/my/my_strlen.c								\
			src/my/my_putstrerr.c							\
			src/my/my_nb_to_base.c							\
			src/my/my_itob.c								\
			src/my/my_utob.c								\

TEST_SRCS   =   criterion/cri_my_printf.c   \

OBJS	=   $(SRCS:.c=.o)
TEST_OBJS   =   $(TEST_SRCS:.c=.o)

all:		$(LIB) $(TEST)

$(LIB): 	$(OBJS)
			ar rc $(LIB) $(OBJS)

$(TEST):	$(TEST_OBJS)
			gcc $(TEST_OBJS) -o $(TEST) -L ./ -lmy -lcriterion

test:   	$(TEST)

clean:
			rm -f $(OBJS) $(TEST_OBJS)

fclean:		clean
			rm -f $(LIB)
			rm -f $(TESTS)

re:			clean all

parle:
			echo "lib$(LIB_NAME)"

.PHONY: 	all clean fclean re