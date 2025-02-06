
#ifndef SCALAR_CONVERTOR_HPP
#define SCALAR_CONVERTOR_HPP

#include <iostream>
#include <string>


class ScalarConvertor {

private:
	ScalarConvertor();
	ScalarConvertor(const ScalarConvertor &obj);
	ScalarConvertor &operator = (const ScalarConvertor &obj);
	~ScalarConvertor();

public:
	static void convert(const std::string &literal);

};


#endif

