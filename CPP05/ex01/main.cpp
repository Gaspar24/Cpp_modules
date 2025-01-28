
#include "Bureaucrat.hpp"
#include "Form.hpp"


// int main() {
// 	try {
// 		Bureaucrat b1("Alice", 140);
// 		std::cout << b1 << std::endl;
// 	}catch (const Bureaucrat::GradeTooHighException& e) {
// 		std::cerr << "Exception: " << e.what() << std::endl;
// 	} catch (const Bureaucrat::GradeTooLowException& e) {
// 		std::cerr << "Exception: " << e.what() << std::endl;
// 	}

// 	Bureaucrat b2("test", 134);
// 	std::cout << b2 << std::endl;
// 	b2.incrementGrade();
// 	std::cout << b2 << std::endl;

// 	Bureaucrat b3("test3",150);
// 	try{
// 		b3.decrementGrade();
// 		std::cout << b3 << std::endl;
// 	}
// 	catch(const Bureaucrat::GradeTooHighException& e){
// 		std::cerr << "Exception: " << e.what() << std::endl;
// 	} catch (const Bureaucrat::GradeTooLowException& e) {
// 		std::cerr << "Exception: " << e.what() << std::endl;
// 	}

//     return 0;
// }

int main(void){


	Form form1("first form",false,4,6);
	std::cout << form1 << std::endl;

	try{
		Bureaucrat b1("vasile",3); // need to catch the exception for this also .
		form1.beSigned(b1);
	} catch(const Form::GradeTooHighException &e){
		std::cerr <<"Exception: " << e.what() << std::endl;
	}catch(const Form::GradeTooLowException &e){
		std::cerr <<"Exception: " << e.what() << std::endl;
	}

	std::cout << form1.getStatus() << std::endl;
	std::cout << form1 << std::endl;

	std::cout <<"----------------------------\n";

	Form form2("second form",false,3,22);
	try{
		Bureaucrat b4("Bureaucrat",25); // need to catch the exception for this also .
		form2.beSigned(b4);
	} catch(const Form::GradeTooHighException &e){
		std::cerr <<"Exception: " << e.what() << std::endl;
	}catch(const Form::GradeTooLowException &e){
		std::cerr <<"Exception: " << e.what() << std::endl;
	}
	std::cout<<form2 << std::endl;
	std::cout <<"----------------------------\n";
	
	Bureaucrat b2("Bureaucrat2",7);
	b2.signForm(form1);

	Bureaucrat b3("Bureaucrat3", 5);
	b3.signForm(form1);

	






	return 0;
}