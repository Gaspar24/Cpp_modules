
#include "DiamondTrap.hpp"

//DiamondTrap::DiamondTrap() {
//	std::cout << "Diamond default construcor called" << std::endl;
//}
//DiamondTrap::~DiamondTrap() {
//	std::cout << "Diamond default deconstrucor called" << std::endl;
//}
//
//DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str + "_clap_name"), ScavTrap(str), FragTrap(str) {
//	_name = str;
//	_hitPoints = FragTrap::_hitPoints;
//	_energyPoints = ScavTrap::_energyPoints;
//	_attackDamage = FragTrap::_attackDamage;
//} // need to modify
//
//DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj) {
//	_hitPoints = obj._hitPoints;
//	_energyPoints = obj._energyPoints;
//	_attackDamage = obj._attackDamage;
//}
//
//DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj) {
//	if (this != &obj) {
//		this->_name = obj._name;
//		this->_hitPoints = obj._hitPoints;
//		this->_energyPoints = obj._energyPoints;
//		this->_attackDamage = obj._attackDamage;
//	}
//	return *this;
//}
//
//void DiamondTrap::whoAmI( void ) {
//	std::cout << "My name is " << this->_name << std::endl;
//	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
//}

//----------------------->test<-----------------------


DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap() {
	_name = "Default";
	_hitPoints = FragTrap::_hitPoints;  // Inherited from FragTrap
	_energyPoints = ScavTrap::_energyPoints;  // Inherited from ScavTrap
	_attackDamage = FragTrap::_attackDamage;  // Inherited from FragTrap
	std::cout << "Derived --> DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str + "_clap_name"), ScavTrap(str), FragTrap(str) {
	_name = str;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Derived --> DiamondTrap name set-->  " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj) {
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	std::cout << "Derived --> DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj) {
	if (this != &obj) {
		ClapTrap::operator=(obj);
		_name = obj._name;
		_hitPoints = obj._hitPoints;
		_energyPoints = obj._energyPoints;
		_attackDamage = obj._attackDamage;
	}
	std::cout << "Derived --> DiamondTrap assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Derived --> DiamondTrap destructor called for " << _name << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "I am DiamondTrap name: " << _name << " and ClapTrap name: " << ClapTrap::_name << std::endl;
}