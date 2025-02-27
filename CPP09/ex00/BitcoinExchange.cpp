
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
	_year = 0;
	_month = 0;
	_day = 0;
	_value = 0;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj){
	_year = obj._year;
	_month = obj._month;
	_day = obj._day;
	_value = obj._value;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj){

	if(this != &obj){
		this->_year = obj._year;
		this->_month = obj._month;
		this->_day = obj._day;
		this->_value = obj._value;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange(){}


std::map<std::string,float>	parseDate(std::map<std::string,float> rates,std::string str){

	int i =0;
	while(str[i] != ','){
		i++;
	}
	std::string date = str.substr(0,i);
	std::string sValue = str.substr(i+1,str.length());
	rates[date] = atof(sValue.c_str());

	return rates;
}

/// dosen t work properly
std::map<std::string, float> BitcoinExchange::getRates(std::string filename) {
    std::ifstream myFile(filename);
    std::string myString;
    std::map<std::string, float> rates;

    if (myFile.is_open()) {
        while (std::getline(myFile, myString)) {
		
			// std::cout << myString << std::endl;
			rates = parseDate(rates,myString);
        
        }
        myFile.close();
    } else {
        std::cout << "Unable to open file\n";
    }
    return rates;
}