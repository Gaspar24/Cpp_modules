
#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	this->brain = new Brain();

	std::cout << "Derived --> Dog default constructor has been caled" << std::endl;
}

Dog::Dog(const Dog &obj) {
	type = obj.type;
	this->brain = new Brain(*obj.brain);

	std::cout << "Derived --> Dog copy constructor has been caled" << std::endl;
}

Dog &Dog::operator=(const Dog &obj) {
	if(this != &obj)
	{
		this->type = obj.type;
		this->brain = new Brain(*obj.brain);
	}

	std::cout << "Derived --> Dog asigment operator has been caled" << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << "Derived --> Dog  destructor has been caled" << std::endl;
	delete this->brain;

}

void Dog::makeSound() const {
	std::cout << "Dog sound!!!" << std::endl;
}

std::string	Dog::getType() const {
	return type;
}

Brain *Dog::getBrain() const {
	return (brain);
}