
#include "Fixed.hpp"

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed() : _fixedNumber(0){
	std::cout << "Default constructor called" << std::endl;
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

Fixed::Fixed(const int nb) {
	std::cout << "Int construcor called" << std::endl;
	_fixedNumber = nb << _fractionalBits;  // this shifts the int(nb) to left by the fractional bits --> nb *(2^8)
}

// Constructor that takes a floating-point number as a parameter

Fixed::Fixed(const float nb)
{
	std::cout << "Float construcor called" << std::endl;
	_fixedNumber = static_cast<int>(roundf(nb * (1 << _fractionalBits)));  // Convert float to fixed-point format
//	converts the floating-point number nb to a fixed-point representation.
//	This is done by multiplying nb by (2^{_fractionalBits})
//	(which is 1 << _fractionalBits) and then rounding the result to the nearest integer.
//	The static_cast<int> ensures the result is stored as an integer.
}

// Member function that converts the fixed-point value to a floating-point value
float Fixed::toFloat(void) const {
	return static_cast<float>(_fixedNumber) / (1 << _fractionalBits);  // Convert fixed-point to float
}

// Member function that converts the fixed-point value to an integer value
int Fixed::toInt(void) const {
	return _fixedNumber >> _fractionalBits;  // Convert fixed-point to integer
}

// Overload of the insertion (<<) operator
std::ostream &operator<<(std::ostream &out, const Fixed &f) {
	out << f.toFloat();  // Insert floating-point representation of the fixed-point number
	return out;
}

int Fixed::getRawBits( void ) const {
//	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedNumber;
}

void Fixed::setRawBits( int const raw ) {
	this->_fixedNumber = raw;
}
