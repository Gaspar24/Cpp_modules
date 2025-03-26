
#pragma once

#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <sstream>
#include <utility> 
#include <climits>


class BitcoinExchange{
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &obj);
		BitcoinExchange &operator = (const BitcoinExchange &obj);
		~BitcoinExchange();

		std::list<std::pair<std::string,float>> getRates(std::string filename); 

};

