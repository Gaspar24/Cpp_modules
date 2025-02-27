
#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <sstream>

// template<typename T>

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

		std::map<std::string, float> getRates(std::string filename); 

};

