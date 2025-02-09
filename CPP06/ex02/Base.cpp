

#include "Base.hpp"


Base::~Base(){

	std::cout << "Base destructor\n";
}

A::~A(){ std::cout << "A destructor called\n";}
B::~B(){ std::cout << "B destructor called\n";}
C::~C(){ std::cout << "C destructor called\n";}

