##
## Makefile for MAkefiLe in /home/le-mou_t/rendu/CPE_2015_Pushswap
## 
## Made by Thomas LE MOULLEC
## Login   <le-mou_t@epitech.net>
## 
## Started on  Mon Nov 16 13:10:05 2015 Thomas LE MOULLEC
## Last update Wed Nov 18 11:24:39 2015 Thomas LE MOULLEC
##

RM              = rm -f

CC		= gcc

SRCS            = main.c  \
		  add.c   \
		  print.c \
		  tri.c

OBJS            = $(SRCS:.c=.o)

NAME            = push_swap

LIB		= -L ../../my/ -lmy

all:            $(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB) -I.

clean:
		$(RM) $(OBJS)

fclean:         clean
		$(RM) $(NAME)

re:		fclean all
