
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap dorel("Dorel");
	dorel.attack("enemy");
	dorel.takeDamage(2);
	dorel.beRepaired(2);
	dorel.guardGate();
//	std::cout << "serena" << std::endl;
	return 0;
}