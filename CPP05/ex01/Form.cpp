#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():_name(""),_signed(false), _ExecGrade(0), _ReqGrade(150){}

Form::Form(const Form &obj):_name(obj._name),_signed(obj._signed),
						_ExecGrade(obj._ExecGrade), _ReqGrade(obj._ReqGrade) {}

Form &Form::operator=(const Form &obj) {
    if (this != &obj) {
        this->_signed = obj._signed;
    }
    return *this;
}

Form::~Form(){}

Form::Form(std::string name, bool status, const int execGrade, const int reqGrade):
            _name(name), _signed(status), _ExecGrade(execGrade), _ReqGrade(reqGrade) {
                
        if(_ExecGrade < 1 )
            throw Form::GradeTooHighException();
        else if(_ExecGrade > 150)
            throw Form::GradeTooLowException();
        if(_ReqGrade < 1)
            throw Form::GradeTooHighException();
        else if(_ReqGrade > 150)
            throw Form::GradeTooLowException();
}



bool Form::beSigned(const Bureaucrat &obj){
    if(obj.getGrade()  < this->_ReqGrade )
        this->_signed = true;
    else
        throw Form::GradeTooLowException();
    return this->_signed;
}

std::string Form::getName() const {return _name;}

bool Form::getStatus() const { return _signed;}

int Form::getExecutedGrade() const { return _ExecGrade;}

int Form::getRequiredGrade()const {return _ReqGrade;}


const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}


std::ostream & operator<<(std::ostream& os, const Form &f){
	os << "Name: " + f.getName() << " signed status: " <<  f.getStatus() << " executed grade: " << f.getExecutedGrade() << " required grade: " << f.getRequiredGrade() << "."; 
    return os;
}