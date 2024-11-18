
#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "Cat";
	std::cout << "Derived --> Cat default constructor has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) {
	type = obj.type;
	std::cout << "Derived --> Dog copy constructor has been caled" << std::endl;

}

WrongCat &WrongCat::operator=(const WrongCat &obj) {
	if(this != &obj)
		type = obj.type;
	std::cout << "Derived --> Cat assigment has been called" << std::endl;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "Derived --> Cat default destructor has been called" << std::endl;
}

std:: string 	WrongCat::getType() const {
	return type;
}

void	WrongCat::makeSound() const {
	std::cout << "WrongCat sound" << std::endl;
}

