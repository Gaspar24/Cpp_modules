
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	// _hitPoints = 10;
	// _energyPoints = 10;
	// _attackDamage = 0;
	// std::cout << "hit points,energy,and damage had been initialized" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "the destructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string str): _name(str) {
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Name set : " << _name << std::endl;
	std::cout << "hit points,energy,and damage had been initialized" << std::endl;

}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap) {
    if (this != &clap) {
        this->_name = clap._name;
        this->_hitPoints = clap._hitPoints;
        this->_energyPoints = clap._energyPoints;
        this->_attackDamage = clap._attackDamage; 
    }
	std::cout << "assigment opeator created" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if(_hitPoints < 1 || _energyPoints < 1)
	{
		std::cout<<"Not enough hit point or energi for an attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name <<" attacks " << target << " causing" << _attackDamage << " point of damage" << std::endl;
	_energyPoints -= 1; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<<"ClapTrap lost: 2 hit points" << std::endl;
	_hitPoints  -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(_energyPoints < 1)
	{
		std::cout << "Can't do this action, no energy point left" << std::endl;
		return ;
	}
	_hitPoints += amount;
	std::cout << "ClapTrap regained : " << amount << "hitPoints" << std::endl;
}
