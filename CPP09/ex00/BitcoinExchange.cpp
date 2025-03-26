
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj){}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj){

	if(this != &obj){

		*this = obj;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange(){}


std::list<std::pair<std::string,float>>	parseDate(std::list<std::pair<std::string,float>> rates,std::string str){

	int i =0;
	while(str[i] != ','){
		i++;
	}
	std::string date = str.substr(0,i);
	std::string sValue = str.substr(i+1,str.length());
	float value = atof(sValue.c_str());
	rates.push_back(std::make_pair(date,value));


	return rates;
}

std::list<std::pair<std::string,float>> BitcoinExchange::getRates(std::string filename) {
    std::ifstream myFile(filename);
    std::string myString;
	std::list<std::pair<std::string,float>> rates;

    if (myFile.is_open()) {
        while (std::getline(myFile, myString)) {
		
			rates = parseDate(rates,myString);
        
        }
        myFile.close();
    } else {
        std::cout << "Unable to open file\n";
    }
    return rates;
}