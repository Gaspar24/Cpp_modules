#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}


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

void Harl::complain(std::string level) {

	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR") {
		std::cout <<"[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	typedef void(Harl::*HarlMemFn)();
	HarlMemFn functions[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	switch (level[0]) {
		// ou can use comments to indicate intentional fall-through to suppress the warnings.
		case 'D':
			(this->*functions[0])();
            // fall through
		case 'I':
			(this->*functions[1])();
			// fall through
		case 'W':
			(this->*functions[2])();
			// fall through
		case 'E':
			(this->*functions[3])();
			break;
		default:
			std::cout <<"[ Probably complaining about insignificant problems ]" << std::endl;
	}

}




