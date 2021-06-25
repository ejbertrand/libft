# Usage:
# make			# compile all objects and create the library
# make clean	# remove ALL object files (.o)
# make fclean	# remove ALL object files (.o) AND the library (.a)
# make re		# recompilate

.PHONY = all clean fclean re debug

DIR = src
LIB42 = libft.a
SRC := test.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror

OBJ := $(SRC:%.c=%.o)
BIN := $(SRC:%.c=%)

all: 		$(LIB42) $(BIN)

$(LIB42):	./$(DIR)/Makefile
			cd ./$(DIR)/ && $(MAKE)

%.o: 		%.c
			$(CC) -c $(CFLAGS) $<

$(BIN):		$(OBJ) $(DIR)
			$(CC) -lbsd -o $@ $< $(DIR)/$(LIB42)
			@echo "Done ;)"

clean:		
			rm -fv *.o $(BIN)

fclean:		clean
			cd ./$(DIR)/ && $(MAKE) fclean

re:			fclean all

debug:		$(SRC) $(DIR)
			$(CC) -g $(CFLAGS) $(SRC) $(DIR)/*.c -lbsd -o debug
			@echo "Ready to debug ;)"
