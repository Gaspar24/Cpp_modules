
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap dorel("Dorel");
	dorel.highFivesGuys();
	dorel.attack("enemy");
	dorel.takeDamage(2);
	dorel.beRepaired(2);
	return 0;
}