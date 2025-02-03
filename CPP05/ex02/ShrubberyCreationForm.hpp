
#ifndef SHRUBBERY_CREATION_FORM
#define SHRUBBERY_CREATION_FORM

#include "AForm.hpp"
#include "fstream"

#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {

private:
	std::string _target;

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string filename);
	ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	ShrubberyCreationForm &operator = (const ShrubberyCreationForm &obj);
	~ShrubberyCreationForm();

	void execute(const Bureaucrat &executor) const ;

};

#endif