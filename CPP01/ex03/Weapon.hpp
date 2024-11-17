
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
private:
	std::string _type;

public:
	Weapon();
	~Weapon();
	Weapon(std::string str);
	std::string getType() const;
	void	setType(std::string str);
};

#endif