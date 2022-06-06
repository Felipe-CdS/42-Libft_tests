CC			=	gcc
NAME		=	a.out
CFLAGS		=	-Wall -Wextra -Werror
TESTS_UTILS	=	test_all.o
TESTS_OBJ	=	test_isalpha.o test_isdigit.o test_isalnum.o test_isascii.o test_isprint.o test_strlen.o test_memset.o test_bzero.o test_memcpy.o test_toupper.o test_tolower.o test_strchr.o test_strrchr.o test_strncmp.o test_memchr.o test_memcmp.o test_strnstr.o test_atoi.o test_strlcpy.o test_strlcat.o test_memmove.o test_calloc.o test_substr.o test_strjoin.o test_strdup.o test_putchar_fd.o test_putstr_fd.o test_putendl_fd.o test_putnbr_fd.o

## These two flags are used to compile in a unix system where bsd libs aren't avaiable;
## Make should be used like this to compile with the special flag: "make LF=1"
LF			?=	0
LINUX_FLAG	:=	`pkg-config --cflags --libs libbsd-overlay`

#########################################################################
## Standard patterns

all: $(NAME)

clean:
	rm -f *.o  a.out .fd_* __.*

fclean:
	rm -f *.o __.* a.out libtests.a libft.a

.PHONY:
	all clean fclean re

#########################################################################
## Compile just the lib

libtests.a: $(TESTS_OBJ) $(TESTS_UTILS)
	@echo ">Creating Tests lib..."
	ar -x libft.a
	ar -crs libtests.a $(TESTS_OBJ) $(TESTS_UTILS) *.o
	rm *.o

#########################################################################
## Compile main function
## Special rules to compile on linux where bsd libs doesn't exist

$(NAME): libft.a libtests.a
ifeq ($(LF), 0)
	$(CC) main.c libft.a libtests.a -o $(NAME) $(CFLAGS)
else
	$(CC) main.c libft.a libtests.a -o $(NAME) $(CFLAGS) $(LINUX_FLAG)
endif

%.o : %.c
ifeq ($(LF), 0)
	$(CC) -c $< -o $@ $(CFLAGS)
else
	$(CC) -c $< -o $@ $(CFLAGS) $(LINUX_FLAG)
endif
