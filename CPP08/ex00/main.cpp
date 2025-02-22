
#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <map>

int main(void){

	std::vector<int> v = {1,2,3,4,5};
	try{
		easyfind::easyfind(v,9);
	}catch(std::exception &e){
		std::cerr << e.what() <<std::endl;
	}

	std::map<int,int>m = {
		{10,1},
		{20,2},
		{30,3},

	};
	try{
		easyfind::easyfind(m,9);
	}catch(std::exception &e){
		std::cerr << e.what() <<std::endl;
	}
	
	return 0;
}