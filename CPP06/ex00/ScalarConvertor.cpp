
#include "ScalarConvertor.hpp"
#include "ScalarConvertorUtils.hpp"

ScalarConvertor::ScalarConvertor(){}

ScalarConvertor::ScalarConvertor(const ScalarConvertor &obj)
{
	(void)obj;
}

ScalarConvertor &ScalarConvertor::operator=(const ScalarConvertor &obj)
{
	(void)obj;

	return *this;
}

ScalarConvertor::~ScalarConvertor(){}


void ScalarConvertor::convert(const std::string &literal){

    ScalarConverterUtils::convertToChar(literal);
    ScalarConverterUtils::ConvertToInt(literal);
    ScalarConverterUtils::convertToFloat(literal);
    ScalarConverterUtils::convertToDouble(literal);
	
}

