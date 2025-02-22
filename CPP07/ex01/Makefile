
NAME = iter

FLAGS = -Wall -Wextra -Werror --std=c++98

SRC = *.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRC)
	c++ $(SRC) $(FLAGS) -o $(NAME)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



