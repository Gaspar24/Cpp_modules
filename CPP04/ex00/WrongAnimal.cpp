
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Anmial") {
	std::cout << "Base --> WrongAnimal default constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) : type(obj.type) {
	std::cout << "Base-> WrongAnimal copy constructor has been caled" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
	if(this != &obj)
	{
		this->type = obj.type;
	}
	std::cout << "Base -> WrongAnimal assigment operator has been called";
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Base -> WrongAnimal destructor has been called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound :))" << std::endl;
}

std::string	WrongAnimal::getType() const {
//	std::cout << "I'm a : " << type << std::endl;
	return type;
}