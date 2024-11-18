
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public  Animal {

private:
	Brain *brain;

public:

	Cat();
	Cat(const Cat &obj);
	Cat &operator = (const Cat &obj);
	~Cat();

	std::string	getType() const;
	void	makeSound(void) const;
	Brain *getBrain(void) const;

};


#endif