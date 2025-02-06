
#include "Serialization.hpp"

Serialization::Serialization(){}

Serialization::Serialization(const Serialization &obj){
	(void)obj;
}

Serialization &Serialization::operator=(const Serialization &obj){
	(void)obj;
	return *this;
}

Serialization::~Serialization(){}

