/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:31:00 by msacaliu          #+#    #+#             */
/*   Updated: 2024/11/07 11:31:01 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	contact_count = 0;
	current_index = 0;
}

Contact::Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number,
				 std::string d_secret) {
	first_name = f_name;
	last_name = l_name;
	nickname = n_name;
	phone_number = p_number;
	darkest_secret = d_secret;
}

std::string Contact::getFirstName() {
	return first_name;
}

std::string Contact::getLastName() {
	return last_name;
}

std::string Contact::getNickname() {
	return nickname;
}

std::string Contact::getPhone() {
	return phone_number;
}

std::string Contact::getSecret() {
	return darkest_secret;
}

void Contact::setFirstName(std::string str) {
	this->first_name = str;
}

void Contact::setLastName(std::string str) {
	this->last_name = str;
}

void Contact::setNickname(std::string str) {
	this->nickname = str;
}

void Contact::setPhone(std::string str) {
	this->phone_number = str;
}

void Contact::setSecret(std::string str) {
	this->darkest_secret = str;
}

void check_eof() {
	std::cout << "\nEOF detected. Exiting program." << std::endl;
	exit(1);
}

///add contact function
void PhoneBook::add_contact() {
	std::string fn, ln, nn, pn, ds;
	std::cout << "Enter First Name:  ";
	std::cin >> fn;
	if (!std::cin)
		check_eof();
	std::cout << "Enter last name: ";
	std::cin >> ln;
	if (!std::cin)
		check_eof();
	std::cout << "Enter nickname: ";
	std::cin >> nn;
	if (!std::cin)
		check_eof();
	std::cout << "Enter phone number: ";
	std::cin >> pn;
	if (!std::cin)
		check_eof();
	std::cout << "Enter darkest secret: ";
	std::cin >> ds;
	if (!std::cin)
		check_eof();

	if (!check_if_number(pn)) {
		std::cout << "phone number must contain only digits" << std::endl;
		return;
	}
	if (fn.empty() || ln.empty() || nn.empty() || pn.empty() || ds.empty()) {
		std::cout << "All fields must be filled!" << std::endl;
		return;
	}
	Contact new_contact(fn, ln, nn, pn, ds);
	contacts[current_index] = new_contact;
	current_index = (current_index + 1) % 8;
	if (contact_count < 8)
		contact_count++;
}

std::string truncateString(const std::string &str, size_t width) {
	if (str.length() > width)
		return str.substr(0, width - 1) + ".";
	else
		return str;
}

void PhoneBook::print_contacts() {
	for (int i = 0; i < contact_count; ++i) {
		std::cout << std::setw(10) << std::right << i << " | ";
		std::cout << std::setw(10) << std::right << truncateString(contacts[i].getFirstName(), 10) << " | ";
		std::cout << std::setw(10) << std::right << truncateString(contacts[i].getLastName(), 10) << " | ";
		std::cout << std::setw(10) << std::right << truncateString(contacts[i].getNickname(), 10) << std::endl;
	}
}

void PhoneBook::search_contact(int index) {
	if (index >= 0 && index < contact_count) {
		std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
		std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
		std::cout << "Phone Number: " << contacts[index].getPhone() << std::endl;
		std::cout << "Darkest Secret: " << contacts[index].getSecret() << std::endl;
	} else
		std::cout << "Invalid index!" << std::endl;
}

