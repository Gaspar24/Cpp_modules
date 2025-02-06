
#pragma once

#include <sstream>
#include <iostream>
#include <string>
#include <cstdlib>



namespace ScalarConverterUtils {

	void convertToChar(const std::string &str) {
		std::cout << "char: ";
		const std::string arr[] = {"-inff","+inff","nanf","-inf","+inf","nan"};
		size_t arr_len = sizeof(arr) / sizeof(arr[0]);
		for(size_t i = 0; i < arr_len;i++){
			if(str == arr[i])
			{
				std::cout << "Impossible\n";
				return;
			}
		}
		try {
			if (str.length() == 1) {
				char c = str[0]; 
				int value = std::atoi(str.c_str());
				if (value < 32 || value > 126) {
					throw std::exception();
				}
				std::cout << "'" << c << "'" << std::endl;
				return;
			}
			int num = std::atoi(str.c_str());
			if (num < 32 || num > 126) {
				throw std::exception();
			}
			char c = static_cast<char>(num);
			std::cout << "'" << c << "'" << std::endl;
		} catch (std::exception &e) {
			std::cout << "Non displayable" << std::endl;
		}
	}

	void	ConvertToInt(const std::string &str){
		std::cout << "int: ";
		const std::string arr[] = {"-inff","+inff","nanf","-inf","+inf","nan"};
		size_t arr_len = sizeof(arr) / sizeof(arr[0]);
		for(size_t i = 0; i < arr_len;i++){
			if(str == arr[i])
			{
				std::cout << "Impossible\n";
				return;
			}
		}
		try {
			int i = std::atoi(str.c_str());
			std::cout << i << std::endl;
		} catch (std::exception &e) {
			std::cout << "impossible" << std::endl;
		}
	}

  	void convertToFloat(const std::string &value) {
		std::cout << "float: ";
		try {
			
			float f = static_cast<float>(std::atof(value.c_str()));
			std::cout << f;
			if (f == static_cast<int>(f))
				std::cout << ".0";
			std::cout << "f" << std::endl;
		} catch (std::exception &e) {
			std::cout << "impossible" << std::endl;
		}
	}

	void convertToDouble(const std::string &value) {
		std::cout << "double: ";
		try {
			double d = static_cast<float>(std::atof(value.c_str()));
			std::cout << d;
			if (d == static_cast<int>(d))
				std::cout << ".0";
			std::cout << std::endl;
		} catch (std::exception &e) {
			std::cout << "impossible" << std::endl;
		}
	}
	
}