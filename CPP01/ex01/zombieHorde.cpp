
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	if (N <= 0)
		exit(1);
	Zombie *horde = new Zombie[N];
	for(int i = 0; i < N; i++){
		std::ostringstream oss;
		oss << name << (i + 1);
		horde[i].setName(oss.str());
		horde[i].announce();
	}
	return horde;

}