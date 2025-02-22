#include "Array.hpp"
#include "Array.tpp"



int main(void){

	int *a = new int();
	std::cout << *a << std::endl;
	delete a;
	std::cout << "test\n";
		
	return 0;
}
