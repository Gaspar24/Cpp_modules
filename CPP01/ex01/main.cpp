
#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies = zombieHorde(10,"pula");
	delete [] zombies;
	return 0;
}