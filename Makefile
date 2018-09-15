##
## 
## Made by Thomas LE MOULLEC
## 
## Started on  Mon Nov 16 13:10:05 2015 Thomas LE MOULLEC
## Last update Sun Nov 22 17:03:34 2015 Thomas LE MOULLEC
##

RM              = rm -rf

CC		= gcc

SRCS            = main.c       \
		  add.c        \
		  tri.c        \
		  my_putchar.c \
		  my_get_nbr.c

OBJS            = $(SRCS:.c=.o)

NAME            = push_swap

CFLAGS          = -W -Wall -Wextra -Werror

all:            $(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) -I. 

clean:
		$(RM) $(OBJS)

fclean:         clean
		$(RM) $(NAME)

re:		fclean all
