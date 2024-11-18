
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "Correct classes call" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << '\n';
	std::cout << "Wrong classes call" << std::endl;

	const WrongAnimal *WrongMeta = new WrongAnimal();
	const WrongAnimal *pWrongCat = new WrongCat();
	std::cout << pWrongCat->getType() << "" << std::endl;
	pWrongCat->makeSound();
	WrongMeta->makeSound();
	delete pWrongCat;
	delete WrongMeta;
	return 0;
}