
#include "Harl.hpp"

Harl::Harl() {}

Harl:: ~Harl() {}

void Harl::debug() {
	std::cout << DEBUG << std::endl;
}

void	Harl::info() {
	std::cout << INFO << std::endl;
}

void	Harl::warning() {
	std::cout << WARNING << std::endl;
}

void	Harl::error() {
	std::cout << ERROR << std::endl;
}
void	Harl::complain(std::string level)
{
	typedef void (Harl::*HarlMemFn)(); //pointer to member functions
	HarlMemFn functions[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = { DEBUG, INFO, WARNING, ERROR };
	for (size_t i = 0; i < 4; ++i) {
		if (levels[i] == level) {
			// Call the function using the pointer-to-member syntax
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "Invalid level provided: " << level << std::endl;

}