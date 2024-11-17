#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

public:
	FragTrap();
	FragTrap(std::string str);
	FragTrap(const FragTrap &obj);
	FragTrap &operator = (const FragTrap &obj);
	~FragTrap();

	void	highFivesGuys(void);
};
#endif