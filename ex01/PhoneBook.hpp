
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <sstream>
#include <cstdlib>

class  Contact{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	Contact() {} // default constructor
	Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_bumber, std::string d_secret );
//	{
//		first_name = f_name;
//		last_name = l_name;
//		nickname = n_name;
//		phone_number = p_bumber;
//		darkest_secret = d_secret;
//	}
	//  getters
	std::string  getFirstName(void);
	std::string  getLastName(void);
	std::string  getNickname(void);
	std::string getPhone(void);
	std::string getSecret(void);
	// setters
	void	setFirstName(std::string str);
	void	setLastName(std::string str);
	void	setNickname(std::string str);
	void	setPhone(std::string str);
	void	setSecret(std::string str);
};

class PhoneBook{
private :
	Contact contacts[8];
	int contact_count;
	int current_index;
//	PhoneBook() : contact_count(0), current_index(0) {}
public:
//	PhoneBook(){}
//	PhoneBook(int x, int y);
PhoneBook()
	{
		contact_count = 0;
		current_index = 0;
	}
	void	add_contact();
	void	search_contact(int index);
	void	print_contacts();
};
bool check_if_number(std::string str);

#endif