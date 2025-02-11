
#include <iostream>
#include "Operations.hpp"



// int main(void){

// 	int first = 5;
// 	int second = 10;
// 	Operations::swap(first,second);
// 	std::cout <<"------------------------------\n";

// 	std::cout <<  Operations::min(first, second) << std::endl ;

// 	std::cout <<"------------------------------\n";

// 	std::cout << Operations::max("test" ,"ab") << std::endl;
// 	return 0;
// };

int main( void ) {
	int a = 2;
	int b = 3;
	Operations::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << Operations::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << Operations::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	Operations::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << Operations::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << Operations::max( c, d ) << std::endl;
	return 0;
}
