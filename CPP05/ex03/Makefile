
NAME = coffe

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp\
	RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp


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