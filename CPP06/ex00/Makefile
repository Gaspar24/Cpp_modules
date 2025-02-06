
NAME = conversion

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ScalarConvertor.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME);
	rm -rf $(OBJ)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all