
#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string _name;
	Weapon &_weapon; //refernce to weapon

public:
//	HumanA();
	~HumanA();
	HumanA(std::string str, Weapon &weapon);
	void	attack();
};

#endif