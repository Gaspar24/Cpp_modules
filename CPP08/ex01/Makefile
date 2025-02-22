NAME = easyfind

SRC = main.cpp Span.cpp

OBJ = $(SRC:.cpp=.o)

FAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	c++  $(OBJ) $(FLAGS) -o $(NAME)
	# rm -f $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re :fclean all