
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

// class Form;

class Bureaucrat {

private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat(const std::string &str, int nb);
	Bureaucrat &operator = (const Bureaucrat &obj);
	~Bureaucrat();

  	std::string getName(void) const;
    int getGrade(void) const ;

	void	incrementGrade();
	void	decrementGrade();
	void	signForm(AForm &obj);

	void	executeForm(AForm const &forrm);

	class GradeTooHighException : public std::exception{
		public:
			virtual const char *what() const throw();
			
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw();
	};

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);


#endif