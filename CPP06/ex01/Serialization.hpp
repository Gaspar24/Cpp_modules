
#pragma once

#include <iostream>

class Serialization
{
private:
	Serialization();
	Serialization(const Serialization &obj);
	Serialization &operator = (const Serialization &obj);
	~Serialization();

public:
	static uintptr_t serialize(Data *ptr);
};


