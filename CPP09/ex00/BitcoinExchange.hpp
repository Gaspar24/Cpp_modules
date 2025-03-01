
#pragma once

#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <sstream>
#include <utility> 
#include <climits>


enum ErrorCode {
    NEGATIVE_NUMBER = -4242,
    BAD_INPUT = -4243,
    TOO_LARGE = -4244
};


class BitcoinExchange{
	private:
		int _year;
		int _month;
		int _day;
		float	_value;
	
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &obj);
		BitcoinExchange &operator = (const BitcoinExchange &obj);
		~BitcoinExchange();

		std::list<std::pair<std::string,float>> getRates(std::string filename); 

};

