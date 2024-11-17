
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << " Derived--> ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "derived -> FragTrap deconstructor  was called" << std::endl;
}

ScavTrap::ScavTrap(std::string str): ClapTrap(str) {  // the name can be initialized by the based constructor
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "derived -> FragTrap Name set : " << _name << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj) {
	std::cout << "derived -> FragTrap Copy constructor called" << std::endl;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
	if (this != &obj) {
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	std::cout << "derived -> FragTrap opeator created" << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	if(_hitPoints < 1 || _energyPoints < 1)
	{
		std::cout<<" derived -> FragTrap >Not enough hit point or energi for an attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name <<" attacks " << target << " causing " << _attackDamage << " point of damage" << std::endl;
	_energyPoints -= 1;
}


void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is guarding the gate" << std::endl;
}