
#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{

public:
	ScavTrap();
	ScavTrap(std::string str);
	ScavTrap(const ScavTrap &obj);
	ScavTrap &operator = (const ScavTrap &obj);
	~ScavTrap();
	void	guardGate(void);
	void	attack(const std::string &target);

};

#endif