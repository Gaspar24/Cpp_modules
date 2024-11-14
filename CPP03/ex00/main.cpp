#include "ClapTrap.hpp"

int main(void){

	// ClapTrap dorel;
	ClapTrap dorel("Dorel");
	dorel.attack("enemy");
	dorel.takeDamage(2);
	dorel.beRepaired(2);

	// maybe add a check to see if ClapTrap is dead
	return 0;
}