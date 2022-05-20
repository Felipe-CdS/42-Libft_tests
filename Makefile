CC=gcc
NAME=a.out
CFLAGS=-Wall -Wextra -Werror
TESTS_OBJ=print_char_n_null.o test_isalpha.o test_isdigit.o test_isalnum.o test_isascii.o test_isprint.o test_strlen.o test_memset.o test_bzero.o test_memcpy.o test_toupper.o test_tolower.o test_atoi.o

all: $(NAME)

$(NAME): libft.a libtests.a
	$(CC) main.c libft.a libtests.a -o $(NAME) $(CFLAGS)

libtests.a: $(TESTS_OBJ)
	@echo ">Creating Tests lib..."
	ar -x libft.a
	ar -crs libtests.a *.o
	rm *.o

#########################################################
## Test Objects

test_isalpha.o:		test_isalpha.c
	$(CC) -c test_isalpha.c	-o test_isalpha.o

test_isdigit.o:		test_isdigit.c
	$(CC) -c test_isdigit.c	-o test_isdigit.o

test_isalnum.o:		test_isalnum.c
	$(CC) -c test_isalnum.c	-o test_isalnum.o

test_isascii.o:		test_isascii.c
	$(CC) -c test_isascii.c	-o test_isascii.o

test_isprint.o:		test_isprint.c
	$(CC) -c test_isprint.c	-o test_isprint.o

test_strlen.o:		test_strlen.c
	$(CC) -c test_strlen.c	-o test_strlen.o

test_memset.o:		test_memset.c
	$(CC) -c test_memset.c 	-o test_memset.o

test_bzero.o:		test_bzero.c
	$(CC) -c test_bzero.c 	-o test_bzero.o

test_memcpy.o:		test_memcpy.c
	$(CC) -c test_memcpy.c 	-o test_memcpy.o

test_toupper.o:		test_toupper.c
	$(CC) -c test_toupper.c -o test_toupper.o

test_tolower.o:		test_tolower.c
	$(CC) -c test_tolower.c -o test_tolower.o

test_atoi.o: 		test_atoi.c
	$(CC) -c test_atoi.c	-o test_atoi.o

print_char_n_null.o: 	print_char_n_null.c
	$(CC) -c print_char_n_null.c -o print_char_n_null.o

.PHONY:
	all clean fclean re

clean:
	rm -f *.o main.o

fclean:
	rm -f *.o a.out libtests.a
