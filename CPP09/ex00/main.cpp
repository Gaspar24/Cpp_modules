
#include "BitcoinExchange.hpp"

// should check here if the date in input is bigger than the bigest in the csv
void calculate(std::string date, float value, std::list<std::pair<std::string, float>>& rates) {
    
    if (date > rates.back().first) {
        std::cout << "Error: can t see in to the future" << std::endl;
        return;
    }
    std::list<std::pair<std::string, float>>::iterator it;
    std::list<std::pair<std::string, float>>::iterator closestRate = rates.begin(); 
    bool foundClosest = false;

    for (it = rates.begin(); it != rates.end(); it++) {
        if (date >= it->first) { 
            if (!foundClosest || it->first >= closestRate->first) {
                closestRate = it;
                foundClosest = true;
            }
        }
    }
    if (foundClosest) {
        std::cout << date << " => " << value << " = " << value * closestRate->second << std::endl;
    } else {
        std::cout << date << " => " << value << " = Error: No matching date found." << std::endl;
    }
}

int checkValue(float value){
    if(value < 0){
        std::cout << "Error: not a positive number.\n";
        return 1;
    }
    if (static_cast<long long>(value) > INT_MAX) {
        std::cout << "Error: too large a number.\n";
        return 1;
    }
    return 0;
}

int    checkTimeFormat(int year, int month, int day, std::string date){

    if(month > 12 || day > 31){
        std::cout <<"Error: bad input => " << date << std::endl;
        return 1;

    }
    std::list<int>monthsWith30 = {4,6,9,11};
   
    for (std::list<int>::iterator it = monthsWith30.begin(); it != monthsWith30.end(); ++it) {
        if (*it == month && day > 30) {
            std::cout <<"Error: bad input => " << date << std::endl;
            return 1;
        }
    }
    if(month = 2 && year % 4 == 0 && day > 29){
        std::cout <<"Error: bad input => " << date << std::endl;
        return 1;
    }
        
    if(month = 2 && year % 4 != 0 && day > 28){
        std::cout <<"Error: bad input => " << date << std::endl;
        return 1;
    }
    return 0;
}

int checkDate(std::string date){

    date.erase(date.find_last_not_of(" \n\r\t") + 1);
    date.erase(0, date.find_first_not_of(" \n\r\t"));

    if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
        std::cout << "Error: bad input => " << date << std::endl;
        return 1;
    }
    int  year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());
    if(checkTimeFormat(year,month,day,date) == 1)
        return 1;
    int i = 0;
    while(i < date.length()){
        if(date[i] == ' '){
            i++;   
            continue;
        }
        if ((date[i] < '0' || date[i] > '9') && date[i] != '-') {
            std::cout << "Error: bad input => " << date << std::endl;
            return 1;
        }
        i++;
    }

    return 0;
}

void parseInput(const std::string& str,std::list<std::pair<std::string, float>>& rates) {
    std::string date;
    std::string sValue;
    float value;
    int i = 0;

    while (i < str.length() && str[i] != '|') {
        i++;
    }
    if (i == str.length()) {
        std::cout <<"Error: bad input => " << str << std::endl;
        return;
    }
    else {
        date = str.substr(0, i);
        sValue = str.substr(i + 1);
        value = atof(sValue.c_str());
    }

    if(checkDate(date) == 1)
        return ;

    if(checkValue(value) == 1)
        return ;
    
    calculate(date,value,rates);
}


void getInput(std::string filename, std::list<std::pair<std::string, float>>& rates){
	std::ifstream myFile(filename);

    if (myFile.is_open()) {
        std::string myString;
        if(std::getline(myFile, myString)){ // jump over first line
            std::string line;
            while (std::getline(myFile, line)) {
                parseInput(line,rates);
            }
        }else{
            std::cerr << "Error: File is empty or failed to read first line." << std::endl;
        }
        myFile.close();
    } else {
        std::cout << "Unable to open file\n";
    }
}



int main(int argc, char *argv[]){

	if(argc != 2){
		std::cerr << "Wrong number of arguments\n";
		return 1;
	}
	BitcoinExchange bit;
    std::list<std::pair<std::string,float>> rates = bit.getRates("data.csv");
    getInput(argv[1],rates);
	return 0;
}