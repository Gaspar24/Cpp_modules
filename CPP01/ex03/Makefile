NAME = violence
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)
all : $(NAME)

$(NAME) :
	g++ $(FLAGS) $(SRC) -o $(NAME)
	rm -f $(OBJ)

clean:
	rm -f *.o

fclean :clean
	rm -f $(NAME)

re :fclean all