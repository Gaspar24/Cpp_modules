#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>


class ClapTrap{
protected:
	std::string _name;
	int _hitPoints; // health
	int _energyPoints;
	int _attackDamage;
public:
	ClapTrap(void);
	ClapTrap(const ClapTrap &obj);
	ClapTrap(std::string str);
	~ClapTrap();
	ClapTrap &operator = (const ClapTrap &obj);

	// members
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);


};

#endif