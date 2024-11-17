
#include "Fixed.hpp"

Fixed::Fixed() : _fixedNumber(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed(const Fixed &other): _fixedNumber(other._fixedNumber) {
	std::cout << "Copy constructor called" << std::endl;

}

Fixed& Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_fixedNumber = other.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedNumber;
}

void	Fixed::setRawBits(const int raw) {
//	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedNumber = raw;
}
