
#pragma once


namespace Operations {

	template <typename T>
		void swap(T &first, T &second){
			// std::cout << "first: " << first << std::endl;
			// std::cout << "second: " << second << std::endl; 
			T temp = first;
			first = second;
			second = temp;
			// std::cout << "Values changed," << "new first = " << first << " new second = " << second << std::endl;
		};
	

	template <typename T>
	T min(T first, T second){
	
		if(first < second)
			return first;
		else if(second < first)
			return second;
		else
			return second;
	
	};

	template <typename T>
	T max(T first, T second){
			
		if(first > second)
			return first;
		else if(second > first)
			return second;
		else
			return second;
				
	
	};
};
