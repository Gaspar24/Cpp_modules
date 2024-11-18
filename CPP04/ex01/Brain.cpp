
#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "new idea";
	std::cout << "New brain created using the default constructor." << std::endl;
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
	std::cout << "New brain created using the copy constructor." << std::endl;
}

Brain& Brain::operator=(const Brain &obj)
{

	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
	std::cout << "New brain created using the copy assignment operator." << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain's destructor called." << std::endl;
}

std::string Brain::getIdea(int index) const {
	// Ensure index is within bounds
	if (index < 0 || index >= 100) {
		return "No idea";
	}
	return ideas[index];
}