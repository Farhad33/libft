
IDIR= libft.h

NAME= libft

SRC= \
	ft_strlen.c\
	ft_strcpy.c\
	ft_strncpy.c

OBJS= *.o
LIBNAME = libft.a
# CFILES = $(addprefix ./srcs/, $(addsuffix .c, $(SRC)))

CFLAGS= gcc -Wall -Werror -Wextra
RM= /bin/rm -f

all: $(NAME)

$(NAME):
	$(CFLAGS) -c $(SRC) -I$(IDIR)
	ar rc $(LIBNAME) $(OBJS)
	ranlib $(LIBNAME)
	# $(CFLAGS) main.c -I$(IDIR) -L. -llibft -o $(NAME) -g

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBNAME)

re: fclean all
