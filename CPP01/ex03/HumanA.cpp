
//#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::~HumanA() {}

HumanA::HumanA(std::string str, Weapon &weapon) : _name(str), _weapon(weapon) {} // Define the constructor with initializer list

void HumanA::attack() {
	std::cout << _name << "attacks with their " << _weapon.getType() << std::endl;
}