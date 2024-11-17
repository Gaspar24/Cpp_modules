#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string _name;
	Weapon *_weapon;

public:
	HumanB();
	~HumanB();
	HumanB(std::string str);
	void	attack();
	void	setWeapon(Weapon &_weapon);
};

#endif