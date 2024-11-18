
NAME = brain

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

FlAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRC)
	g++ $(FLAGS) $(SRC) -o $(NAME)
	rm -rf $(OBJ)

clean :
	rm -rf $(OBJ)

fclean :
	rm -f $(NAME)

re : fclean all