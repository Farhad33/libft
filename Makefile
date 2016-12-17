NAME= libft

SRC= ft*.c

OBJS= ft*.o

LIBNAME = libft.a

CFLAGS= gcc -Wall -Werror -Wextra
RM= rm -f

all: $(NAME)

$(NAME):
	$(CFLAGS) -c $(SRC) -Ilibft.h
	ar rc $(LIBNAME) $(OBJS)
	ranlib $(LIBNAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBNAME)

re: fclean all
