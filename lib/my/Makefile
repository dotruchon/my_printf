##
## EPITECH PROJECT, 2018
## makefile libmy
## File description:
## task1
##


LIB_NAME = 	my

LIB =		"lib$(LIB_NAME).a"

HEADER =	"$(LIB_NAME).h"

SRCS	=	my_atoi.c				\
			my_itob.c				\
			my_nb_to_base.c			\
			my_putchar.c			\
			my_putstr.c				\
			my_putstrerr.c			\
			my_revstr.c				\
			my_strlen.c				\
			my_utob.c				\

OBJS =		$(SRCS:.c=.o)

all:		$(LIB)

$(LIB):
		gcc -c $(SRCS)
		ar rc $(LIB) $(OBJS)
		cp -f $(HEADER) ../../include/
		cp -f $(LIB) ../../

clean:
		rm -f $(OBJS)

fclean:		clean
		rm -f $(LIB)

re:		clean all

parle:
		echo "lib$(LIB_NAME)"
