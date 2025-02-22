
#pragma once

#include <iostream>
#include <stdexcept>
#include <algorithm>

namespace easyfind{
	template<typename T>
	void	easyfind(T container, int target){

        typename T::iterator it;
		for( it = container.begin(); it != container.end(); it++){
			if(*it == target){
				std::cout << "target found: " << *it << std::endl;
				return;
			}
		}
        throw std::runtime_error("No Target found");
	}
}

