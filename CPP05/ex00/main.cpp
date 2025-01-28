
#include "Bureaucrat.hpp"


int main() {
	try {
		Bureaucrat b1("Alice", 140);
		std::cout << b1 << std::endl;
	}catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	Bureaucrat b2("test", 134);
	std::cout << b2 << std::endl;
	b2.incrementGrade();
	std::cout << b2 << std::endl;

	Bureaucrat b3("test3",150);
	try{
		b3.decrementGrade();
		std::cout << b3 << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e){
		std::cerr << "Exception: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

    return 0;
}

// catch (const Bureaucrat::GradeTooHighException& e) {
	// 	std::cerr << "Exception: " << e.what() << std::endl;
	// } catch (const Bureaucrat::GradeTooLowException& e) {
	// 	std::cerr << "Exception: " << e.what() << std::endl;
	// }