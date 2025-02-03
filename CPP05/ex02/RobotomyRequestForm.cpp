
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm(), _target(""){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj),_target(obj._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj){
	if (this != &obj){
		AForm::operator=(obj);
        _target = obj._target;

	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("RobotomyRequestForm",false,45,72), _target(target){}


void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
	if (!getStatus())
        throw AForm::NoSignException();
    if (executor.getGrade() > getRequiredGrade()){
        throw AForm::GradeTooLowException();
	}
	std::cout << "Drilling noise" << std::endl;
	srand(time(0));
	int nb = 1 + rand() % 10;
    if (nb % 2)
        std::cout << _target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy failed." << std::endl;


}
