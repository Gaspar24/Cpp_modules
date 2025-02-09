

#include "Base.hpp"


int main(void){

	Base *p = generate();
	delete p;
	std::cout << "------------------------------\n";
	Base *p2 = generate();
	identify(p2);
	std::cout << "------------------------------\n";
	
	identify(*p2);
	delete p2;	
	return 0;

}
