
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &obj) {
	(void)obj;
}

Intern &Intern::operator=(const Intern &obj) {
    (void)obj; 
    return *this;
}

Intern::~Intern() {}


 

// int Intern::getFormType(const std::string &formName) const {
//     if (formName == "shrubbery creation") {
//         return SHRUBBERY_CREATION;
//     } else if (formName == "robotomy request") {
//         return ROBOTOMY_REQUEST;
//     } else if (formName == "presidential pardon") {
//         return PRESIDENTIAL_PARDON;
//     } else {
//         return  UNKNOWN_FORM;
//     }
// }

AForm *Intern::makeForm(std::string formName, std::string target) {

    // typedef void(Intern::*InternMemFn)();
    // InternMemFn functions[] = {&AForm::ShrubberyCreationForm(target),}
    int case_nb = -1;
    const char *forms[3] = {"shrubbery creation","robotomy request","presidential pardon"};
    for (int i = 0; i < 3; i++){
        if(formName == forms[i])
            case_nb = i;
    }

    switch (case_nb) {
        case 0:
            std::cout << "Intern creates " << formName << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cout << "Intern creates " << formName << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates " << formName << std::endl;
            return new PresidentialPardonForm(target);
        default:
            std::cout << "Intern can't create " << formName << " because it's not a valid form name" << std::endl;
            return NULL;
    }
}