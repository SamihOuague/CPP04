CC=g++
CPPFLAGS=-g -I./includes -Wall -Werror -Wextra -std=c++98 
NAME=zombie
SRC=main.cpp \
    Zombie.cpp \
    newZombie.cpp \
    randomChump.cpp \
    zombieHorde.cpp
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
