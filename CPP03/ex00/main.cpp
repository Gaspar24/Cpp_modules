#include "ClapTrap.hpp"

int main(void){

	// ClapTrap dorel;
	ClapTrap dorel("Dorel");
	dorel.attack("enemy");
	dorel.attack("enemy");
	dorel.attack("enemy");
	dorel.attack("enemy");

	dorel.beRepaired(2);
	return 0;
}