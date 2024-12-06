CC=g++
CPPFLAGS=-I./includes -Wall -Werror -Wextra -std=c++98 
NAME=phonebook
SRC=main.cpp \
    src/PhoneBook.cpp \
    src/Contact.cpp
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
