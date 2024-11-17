
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <sstream>

class Zombie {

private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string str);
	~Zombie();

	void	announce(void);
	void	setName(std::string str);
};

Zombie* zombieHorde( int N, std::string name );

#endif