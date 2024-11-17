
#include "FragTrap.hpp"


FragTrap::FragTrap() {
	std::cout << "Derived -> FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string str): ClapTrap(str){
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Derived -> FragTrap--> Name set: " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj) {
	std::cout << "derived -> FragTrap Copy constructor called" << std::endl;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
	if (this != &obj) {
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	std::cout << "Derived--> FragTrap assigment opeator created" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "Derived --> FragTrap destructor called;" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "fragTrap Name: " << _name << " ask s for high five" << std::endl;
}