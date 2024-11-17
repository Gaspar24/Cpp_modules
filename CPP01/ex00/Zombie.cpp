
#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << _name << ": was destroyed" << std::endl;
}

Zombie::Zombie(std::string str):_name(str) {}

void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}