
#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string type;

public:

	WrongAnimal(void);

	WrongAnimal(const WrongAnimal &obj);

	WrongAnimal &operator=(const WrongAnimal &obj);

	~WrongAnimal();

	void makeSound(void) const;
	std::string	getType() const;

};

#endif