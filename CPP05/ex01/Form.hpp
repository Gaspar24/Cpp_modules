
#ifndef FORM_HPP
#define FORM_HPP

// #include "Bureaucrat.hpp"

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;
class AForm {

	private:
		const std::string _name;
		bool _signed;
		const int _ExecGrade;
		const int _ReqGrade;

	public:
		AForm();
		AForm(const AForm &obj);
		AForm &operator = (const AForm &obj);
		~AForm();
		AForm(std::string name, bool status, const int execGrade, const int reqGrade);
		
		std::string getName(void) const;
		bool getStatus(void) const ;
		int getExecutedGrade(void) const;
		int getRequiredGrade() const;
		bool beSigned(const Bureaucrat &obj);


	class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

};

std::ostream& operator << (std::ostream& os, const AForm& f);

#endif