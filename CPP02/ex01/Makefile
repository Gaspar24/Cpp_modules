NAME = useful
SRC = main.cpp Fixed.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) :
	g++ $(FLAGS) $(SRC) -o $(NAME)
	rm -rf $(OBJ)

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(NAME)
	rm -f $(OBJ)

re : fclean all