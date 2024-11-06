
#include "PhoneBook.hpp"\

bool check_if_number(std::string str)
{
	for(size_t i = 0; i < str.length();i++){
		if (!std::isdigit(str[i]))
			return (false);
	}
	return(true);
}
int main(void)
{
	PhoneBook phoneBook;
	size_t	i;
	std::string command;
	std::string input;
	int index;
	std::cout << "You can use one of this three commands : ADD, SEARCH, EXIT" << std::endl;
	while(1)
	{
		std::cout << "enter a command: ";
		std::cin >>  command;
		if(std::cin.eof())
		{
			std::cout << "\nEOF detected. Exiting program." << std::endl;
			return 0;
		}
		i = -1;
		while(++i < command.length())
			command[i] = std::toupper(command[i]);
		if(command == "ADD")
			phoneBook.add_contact();
		else if(command == "SEARCH")
		{
			phoneBook.print_contacts();
			std::cout <<  "Enter a valid index: ";
			std::cin >> input;
			if (std::cin.eof()) {
				std::cout << "\nEOF detected. Exiting program." << std::endl;
				return 0;
			}
			if (check_if_number(input)) {
				std::stringstream ss(input);
				ss >> index;
				phoneBook.search_contact(index);
			}
			else
				std::cout << "index must be a number"<< std::endl;
		}
		else if(command == "EXIT")
		{
			std::cout << "Phone book closed" << std::endl;
			return(0);
		}
		else
			std::cout << "You can only use ADD, SEARCH, EXIT " << std::endl;
	}
	return(0);
}
