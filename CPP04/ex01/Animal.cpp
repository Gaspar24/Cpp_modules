
#include "Animal.hpp"

Animal::Animal() : type("Anmial") {
	std::cout << "Base --> Animal default constructor has been called" << std::endl;
}

Animal::Animal(const Animal &obj) : type(obj.type) {
	std::cout << "Base-> Animal copy constructor has been caled" << std::endl;
}

Animal &Animal::operator=(const Animal &obj) {
	if(this != &obj)
	{
		this->type = obj.type;
	}
	std::cout << "Base -> assigment operator has been called";
	return *this;
}

Animal::~Animal() {
	std::cout << "Base -> Animal destructor has been called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal sound :))" << std::endl;
}

std::string	Animal::getType() const {
//	std::cout << "I'm a : " << type << std::endl;
	return type;
}