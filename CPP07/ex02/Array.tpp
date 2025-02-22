#pragma once


#include "Array.hpp"

template <typename T>
Array<T>::Array():_arr(NULL), _size(0){}


template <typename T>
Array<T>::Array(const Array &obj){

	this->_size = obj._size;
	this->_arr = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++){
		this->_arr[i] = obj._arr[i];
	}
}

template <typename T>
Array<T>::Array(unsigned int n ){

        this->_size = n;
        this->_arr = new T[this->_size];
        for (size_t i = 0; i < this->_size; i++){
                this->_arr[i] = T();
        }
}



template <typename T>

Array<T>& Array<T>::operator=(const Array<T> &obj) {
	
	if(this != &obj){
		delete[] _arr;  // delete bad memori if they are not similar
		this->_size = obj._size;
		_arr = new T[_size];  //alocate and assign new one
		for (size_t i = 0; i < this->_size; i++){
			this->_arr[i] = obj._arr[i];
		}
	}
	return *this;
}

template<typename T>
Array<T>::~Array() { delete[] _arr; std::cout << "destructor called\n";}

//subscript operator-> used for accesing an element in an array or other container type

template<typename T>
T& Array<T>::operator[](unsigned int index){
	if(index >=_size)
		throw std::out_of_range("Index out of bounds");
	return _arr[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}


