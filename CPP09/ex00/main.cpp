
#include "BitcoinExchange.hpp"

std::map<std::string, float> parseInput(std::map <std::string, float>,std::string str){

	std::map <std::string, float> rates;
	int i =0;
	while(str[i] != '|'){
		i++;
	}
	std::string date = str.substr(0,i);
	std::string sValue = str.substr(i+1,str.length());
	rates[date] = atof(sValue.c_str());
	return rates;
}



std::map<std::string, float> getInput(std::string filename){
	std::ifstream myFile(filename);
    std::string myString;
    std::map<std::string, float> rates;

    if (myFile.is_open()) {
        while (std::getline(myFile, myString)) {
		
			rates = parseInput(rates,myString);
        
        }
        myFile.close();
    } else {
        std::cout << "Unable to open file\n";
    }
	return rates;
}



int main(int argc, char *argv[]){

	if(argc != 2){
		std::cerr << "Wrong number of arguments\n";
		return 1;
	}


	BitcoinExchange bit;
	std::map <std::string, float> rates = bit.getRates("data.csv");

	std::map<std::string , float> inputFile = getInput(argv[1]);
	// std::map<std::string, float>::iterator it;

    // for (it = rates.begin(); it != rates.end(); ++it) {
    //     std::cout << "Date: " << it->first << ", Value: " << it->second << std::endl;
    // }


	return 0;
}