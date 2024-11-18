
#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	this->brain = new Brain();

	std::cout << "Derived --> Cat default constructor has been called" << std::endl;
}

Cat::Cat(const Cat &obj) {
	type = obj.type;
	this->brain = new Brain(*obj.brain);

	std::cout << "Derived --> Dog copy constructor has been caled" << std::endl;

}

Cat &Cat::operator=(const Cat &obj) {
	if(this != &obj)
	{
		type = obj.type;
		this->brain = new Brain(*obj.brain);

	}
	std::cout << "Derived --> Cat assigment has been called" << std::endl;
	return *this;
}

Cat::~Cat(){
	std::cout << "Derived --> Cat default destructor has been called" << std::endl;
	delete this->brain;

}

std:: string 	Cat::getType() const {
	return type;
}

void	Cat::makeSound() const {
	std::cout << "Cat sound" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (brain);
}

