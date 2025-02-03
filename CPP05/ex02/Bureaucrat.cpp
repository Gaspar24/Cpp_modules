
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(150){}


Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other._name), _grade(other._grade){
	std::cout << "Base --> Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &str, int nb) : _name(str), _grade(nb) {
    if (_grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (_grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	if(this != &other){
		this->_grade = other._grade;
	}
	std::cout << " Base --> Bureaucrat assigment opeator created" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat(){}


void Bureaucrat::signForm(AForm &obj) {
    try {
        obj.beSigned(*this);
        std::cout << this->getName() << " signed " << obj.getName() << std::endl;
    } catch (const std::exception &e) {
        std::cout << this->getName() << " couldn't sign " << obj.getName() << " because " << e.what() << std::endl;
    }
}

std::string Bureaucrat::getName() const {
	return this->_name;
}


int Bureaucrat::getGrade() const {
	return this->_grade;
}

// Bureaucrat::GradeTooHighException

void Bureaucrat::incrementGrade() {
	if(_grade <= 1 )
		throw Bureaucrat::GradeTooHighException();
	else 
		this->_grade -= 1;
}


void Bureaucrat::decrementGrade() {
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}



void Bureaucrat::executeForm(AForm const &form){
	try {
		form.execute( *this);
			std::cout <<  this->_name << " executed " << form.getName()<< std::endl;
	} catch (const AForm::GradeTooLowException& e) {
        std::cerr << e.what() <<  std::endl;
    }
    catch (const AForm::NoSignException &e) {
        std::cout << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}



