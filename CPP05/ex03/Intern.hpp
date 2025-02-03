#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <map>



class Intern {

	/// need to use sme kind of an array of pointers to member functions to handle certain forms
public:
	Intern();

	Intern(const Intern &obj);

	Intern &operator = (const Intern &obj);
	~Intern();
	enum FormType {
		SHRUBBERY_CREATION,
		ROBOTOMY_REQUEST,
		PRESIDENTIAL_PARDON,
		UNKNOWN_FORM
	};
	// int getFormType(const std::string &formName) const;
	AForm *makeForm(std::string form, std::string target);

	

};


#endif