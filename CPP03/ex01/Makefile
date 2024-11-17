NAME = serena

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) :
	g++ $(FLAGS) $(SRC) -o $(NAME)
	rm -f $(OBJ)

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(NAME)

re : fclean all