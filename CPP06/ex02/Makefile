
NAME = identify

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Base.cpp functions.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRC)
	c++ $(SRC) $(FLAGS) -o $(NAME)
	rm -f $(OBJ)

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(NAME)

re : fclean all
	
