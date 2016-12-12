
IDIR= libft.h

NAME= libft

SRC= ft*.c

OBJS= *.o
LIBNAME = libft.a

CFLAGS= gcc -Wall -Werror -Wextra
RM= rm -f

all: $(NAME)

$(NAME):
	$(CFLAGS) -c $(SRC) -I$(IDIR)
	ar rc $(LIBNAME) $(OBJS)
	ranlib $(LIBNAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBNAME)

re: fclean all
