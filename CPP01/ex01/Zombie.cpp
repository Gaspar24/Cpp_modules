
#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie:: ~Zombie(){
	std::cout << _name << ": Was destroyed" << std::endl;

}

void	Zombie::setName(std::string str) {
	_name = str;
}
void	Zombie::announce() {
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}