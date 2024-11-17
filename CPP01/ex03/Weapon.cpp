
#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::~Weapon() {}

Weapon::Weapon(std::string str):_type(str) {}
std::string Weapon::getType() const {
	return _type;
}

void Weapon::setType(std::string str) {
	this->_type = str;
}