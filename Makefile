# Usage:
# make			# compile all objects and create the library
# make clean	# remove ALL object files (.o)
# make fclean	# remove ALL object files (.o) AND the library (.a)
# make re		# recompilate

.PHONY = all clean fclean re

NAME = libft.a
HEADERS = libft.h

CC = gcc		# compiler to use
CFLAGS = -c -Wall -Wextra -Werror

SRCS := $(wildcard *.c)

OBJS := $(SRCS:%.c=%.o)

all:		$(NAME)

$(NAME): 	$(OBJS)
			ar rcs $@ $^
			@echo "Library" \'$@\' "created!"

%.o: 		%.c $(HEADERS)
			$(CC) $(CFLAGS) $<

clean:
			rm -vf *.o

fclean: 	clean
			rm -f $(NAME)
			@echo "Removed static library" \'$(NAME)\'

re: 		clean all
