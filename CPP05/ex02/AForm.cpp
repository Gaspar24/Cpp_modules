#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm():_name(""),_signed(false), _ExecGrade(0), _ReqGrade(150){}

AForm::AForm(const AForm &obj):_name(obj._name),_signed(obj._signed),
						_ExecGrade(obj._ExecGrade), _ReqGrade(obj._ReqGrade) {}

AForm &AForm::operator=(const AForm &obj) {
    if (this != &obj) {
        this->_signed = obj._signed;
    }
    return *this;
}

AForm::~AForm(){}

AForm::AForm(std::string name, bool status, const int execGrade, const int reqGrade):
            _name(name), _signed(status), _ExecGrade(execGrade), _ReqGrade(reqGrade) {
                
        if(_ExecGrade < 1 )
            throw AForm::GradeTooHighException();
        else if(_ExecGrade > 150)
            throw AForm::GradeTooLowException();
        if(_ReqGrade < 1)
            throw AForm::GradeTooHighException();
        else if(_ReqGrade > 150)
            throw AForm::GradeTooLowException();
}



bool AForm::beSigned(const Bureaucrat &obj){
    if(obj.getGrade()  < this->_ReqGrade )
        this->_signed = true;
    else
        throw AForm::GradeTooLowException();
    return this->_signed;
}

std::string AForm::getName() const {return _name;}

bool AForm::getStatus() const { return _signed;}

int AForm::getExecutedGrade() const { return _ExecGrade;}

int AForm::getRequiredGrade()const {return _ReqGrade;}


const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

const char*  AForm::NoSignException::what() const throw(){
    return "Cant sign the form";
}


std::ostream & operator<<(std::ostream& os, const AForm &f){
	os << "Name: " + f.getName() << " signed status: " <<  f.getStatus() << " executed grade: " << f.getExecutedGrade() << " required grade: " << f.getRequiredGrade() << "."; 
    return os;
}