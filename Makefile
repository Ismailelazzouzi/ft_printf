NAME = libftprintf.a

AR = ar rcs

HEADER = ft_printf.h

SOURCES =	ft_printf.c \
			print_char.c \
			print_str.c \
			print_number.c \
			print_unsigned.c \
			print_adress.c \
			itohex.c \

OBJECTS = $(SOURCES:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
