#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <fstream>  // file
#include <string>
#include <sstream>


std::string readFromFile(const std::string fileName);
void	writeToFile(std::string str);
int 	checkIfString(std::string str);
std::string replaceAllOccurrences(std::string content, const  std::string& s1,  const  std::string& s2);

#endif