
#include "Zombie.hpp"

int main(void)
{
	//create a zombie on the heap
	Zombie* heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete heapZombie; //deallocate memory
	//creates zombie on stack
	randomChump("StackZombie");

	return 0;
}