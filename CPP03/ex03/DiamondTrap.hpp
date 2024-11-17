
#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap , public FragTrap {
private:
	std::string _name;

public:
	DiamondTrap();

	DiamondTrap(std::string str);
	DiamondTrap(const DiamondTrap &obj);

	DiamondTrap &operator=(const DiamondTrap &obj);

	~DiamondTrap();

	using ScavTrap::attack;

	void whoAmI(void);

};
#endif