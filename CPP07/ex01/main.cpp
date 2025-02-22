
#include <iostream>
#include "iter.hpp"

template <typename E>
void displayContent(E element){
	std::cout << element << std::endl;
};


int main(void){

	int arrInt[] = {1,2,3,4,5};
	int arrIntLen = sizeof(arrInt) / sizeof(arrInt[0]);
	Iter::iter(arrInt, arrIntLen, displayContent<int>);
	std::cout << "----------------------------------\n";

	std::string colors[] = {"red","green","blue"};
	size_t arrColorsLen = sizeof(colors) / sizeof(colors[0]);
	Iter::iter(colors, arrColorsLen,displayContent<std::string>);
	return 0;
}
