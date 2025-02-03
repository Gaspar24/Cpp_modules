#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm(), _target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
    : AForm(obj), _target(obj._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
    if (this != &obj) {
        AForm::operator=(obj);
        _target = obj._target;
        // this->_ExecGrade = obj._ExecGrade;
        // this->_ReqGrade = obj._ReqGrade;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
    : AForm("ShrubberyCreationForm", false, 137, 145), _target(target) {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
  
    if (!getStatus()){
        throw AForm::NoSignException();
    }
    if (executor.getGrade() > getRequiredGrade()){
        throw AForm::GradeTooLowException();
    }
    
    std::ofstream MyFile((this->_target + "_shrubbery").c_str());
    if (!MyFile) {
        std::cerr << "Unable to open file" << std::endl;
    } else {
        MyFile << "       _-_\n"
               << "    /~~   ~~\\\n"
               << " /~~         ~~\\\n"
               << "{               }\n"
               << " \\  _-     -_  /\n"
               << "   ~  \\\\ //  ~\n"
               << "_- -   | | _- _\n"
               << "  _ -  | |   -_\n"
               << "      // \\\\\n";
        MyFile.close();
    }
}

