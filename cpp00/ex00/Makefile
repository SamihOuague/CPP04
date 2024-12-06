CC=g++
CPPFLAGS=-Wall -Werror -Wextra -std=c++98
NAME=megaphone
SRC=megaphone.cpp
OBJ=$(SRC:.cpp=.o)


$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re clean fclean
