
#include "Data.hpp"

std::string readFromFile(const std::string fileName)
{
	std::string content;
	std::string line;
	std::ifstream file(fileName.c_str());
	if (!file) {
		std::cerr << "Error opening file: " << fileName << std::endl;
		return "";
	}
	while (std::getline(file, line))
	{
		content += line + "\n";
	}
	file.close();
	return  content;
}

std::string replaceAllOccurrences(std::string content, const  std::string& s1,  const  std::string& s2) {
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos) {
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
	return content;
}
void	writeToFile(std::string content)
{
	std::ofstream file("newText");
	file << content;
	file.close();
}

int checkIfString(std::string str)
{
	for(size_t i = 0; i < str.length(); i++)
	{
		if( std::isalpha(str[i]) == 0)
			return(1);
	}
	return(0);
}