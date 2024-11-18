
#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public  WrongAnimal {

public:

	WrongCat();
	WrongCat(const WrongCat &obj);
	WrongCat &operator = (const WrongCat &obj);
	~WrongCat();

	std::string	getType() const;
	void	makeSound(void) const;
};


#endif