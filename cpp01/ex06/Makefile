CC=g++
CPPFLAGS=-g -I./includes -std=c++98 -Wall -Wextra -Werror
NAME=harlFilter
SRC=main.cpp \
    Harl.cpp
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
