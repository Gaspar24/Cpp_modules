
#include <iostream>

#include <stdexcept>



template <typename T>
class Array{


	private:
		T *_arr;
		unsigned int _size;
	public:
		Array();
		Array(const Array &obj);
		Array &operator = (const Array &obj);
		~Array();

		Array(unsigned int n);
		 T& operator[](unsigned int index);
    		unsigned int size() const;
};



