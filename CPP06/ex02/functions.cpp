
#include "Base.hpp"

#include <cstdlib>

#include <ctime>

Base *generate(void){
	static bool seeded = false; // Only seed once
    	if (!seeded) {
        	srand(time(NULL));
       		seeded = true;
    	}
	int random = (rand() % 3) + 1;
	std::cout << random  << "\n";
	if(random == 1)
		return new A;
	else if (random == 2)
		return new B;
	else if(random == 3)
		return new C;
	else 
		return new C;	
	
};


void identify(Base *p){
	
	if(dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if(dynamic_cast<B*>(p))
                std::cout << "B\n";
	else if(dynamic_cast<C*>(p))
                std::cout << "C\n";
	else
		std::cout << "unknown pointer\n";


	
};

void identify(Base &p){

	try{
		Base &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Identified as A\n";
		return ;

	}catch(...){
		//pass;
	}

	 try{
                Base &b = dynamic_cast<B&>(p);
                (void)b;
                std::cout << "Identified as B\n";
                return ;

        }catch(...){
                //pass;
        }

	try{
                Base &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "Identified as C\n";
                return ;

        }catch(...){
                //pass;
        }




};

