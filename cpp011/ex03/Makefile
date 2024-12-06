CC=g++
CPPFLAGS=-g -I./includes -Wall -Werror -Wextra -std=c++98 
NAME=human
SRC=main.cpp \
    src/Weapon.cpp \
    src/HumanA.cpp \
    src/HumanB.cpp
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
