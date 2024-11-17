
#include "Data.hpp"

int main(int argc, char *argv[])
{
	if(argc != 4)
	{
		std::cout << "4 parameters required, <filename> <string to be replaced> <string that replace>" << std::endl;
		return 1;
	}
	std::string fileName = argv[1];
	const std::string s1 = argv[2];
	const std::string s2 = argv[3];

	std::string content = readFromFile(fileName);
	content = replaceAllOccurrences(content,s1,s2);
	writeToFile(content);
	return 0;
}