
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


//int main(void)
//{
//
//	Animal *a = new Animal();
//	a->makeSound();
////	Animal *arr[4];
////	for (int i = 0; i < 4; i++)
////	{
////		if (i % 2 == 0)
////		{
////			arr[i] = new Dog();
////			arr[i]->makeSound();
////		}
////		else
////		{
////			arr[i] = new Cat();
////			arr[i]->makeSound();
////		}
////	}
////	Cat c;
////	Dog d;
////	for (int i = 0; i < 5; i++)
////	{
////		std::cout << i << ". In my cat's brain there's a " << c.getBrain()->getIdea(i) << std::endl;
////		std::cout << i << ". In my dog's brain there's a " << d.getBrain()->getIdea(i) << std::endl;
////	}
////	for (int i = 0; i < 4; i++)
////		delete arr[i];
//	return 0;
//}


int main(void)
{
//	 Animal *animal = new Animal();
//
//	 delete animal;
//
//	 Animal test;

	Animal *dog = new Dog();
	Animal *cat = new Cat();

	// makesound

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;
}