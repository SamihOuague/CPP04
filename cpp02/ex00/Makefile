CC=g++
CPPFLAGS=-g -Wall -Werror -Wextra -std=c++98 
NAME=fixed
SRC=main.cpp \
    Fixed.cpp

OBJ=$(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
