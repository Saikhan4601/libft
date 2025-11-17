NAME = libft.a

SRC = ft_strlen.c \
		ft_atoi.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memset.c \
		ft_bzero.c \
		




OBJS = ${SRC:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.o: .c
	${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re bonus