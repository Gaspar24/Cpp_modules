
#include "ScalarConvertor.hpp"


int main(int argc, char **argv){

	if (argc != 2){
		std::cerr << "Wrong number of arguments\n";
		return 1;
	}
	const std::string string = argv[1];
	ScalarConvertor::convert(string);


	return 0;
};