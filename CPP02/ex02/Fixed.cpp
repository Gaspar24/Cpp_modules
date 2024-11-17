
#include "Fixed.hpp"

Fixed::Fixed(): _fixedNumber(0) {}

Fixed::~Fixed() {
	std::cout << "destructor called" << std::endl;
}
Fixed::Fixed( const int n ) {
	this->_fixedNumber = n << this->_fractionalBits;
	return ;
}

Fixed::Fixed( const float n ) {
	this->_fixedNumber = n * (1 << this->_fractionalBits) + (n >= 0 ? 0.5 : -0.5);
	return ;
}

Fixed::Fixed(const Fixed &f): _fixedNumber(f._fixedNumber)  {
	std::cout << "Copy constructor called" << std::endl;

}

Fixed& Fixed::operator = (const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &f)
		this->_fixedNumber = f.getRawBits();
	return *this;

}
float Fixed::toFloat( void ) const {
	return (float(this->_fixedNumber) / float(1 << this->_fractionalBits));
}

int Fixed::toInt( void ) const {
	return (this->_fixedNumber >> this->_fractionalBits);
}


// bool operators
int Fixed::getRawBits( void ) const {
//	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedNumber;
}

void Fixed::setRawBits( int const raw ) {
	this->_fixedNumber = raw;
}

bool Fixed::operator>( const Fixed &s ) const {
	return (this->getRawBits() > s.getRawBits());
}

bool Fixed::operator<( const Fixed &s ) const {
	return (this->getRawBits() < s.getRawBits());
}

bool Fixed::operator>=( const Fixed &s ) const {
	return (this->getRawBits() >= s.getRawBits());
}

bool Fixed::operator<=( const Fixed &s ) const {
	return (this->getRawBits() <= s.getRawBits());
}

bool Fixed::operator==( const Fixed &s ) const {
	return (this->getRawBits() == s.getRawBits());
}

bool Fixed::operator!=( const Fixed &s ) const {
	return (this->getRawBits() != s.getRawBits());
}


// Arithmetic operators

Fixed Fixed::operator+( const Fixed &s ) const {
	return Fixed( this->toFloat() + s.toFloat() );
}

Fixed Fixed::operator-( const Fixed &s ) const {
	return Fixed( this->toFloat() - s.toFloat() );
}

Fixed Fixed::operator*( const Fixed &s ) const {
	return Fixed( this->toFloat() * s.toFloat() );
}

Fixed Fixed::operator/( const Fixed &s ) const {
	return Fixed( this->toFloat() / s.toFloat() );
}

std::ostream &operator<<( std::ostream &out, const Fixed &f) {
	return (out << f.toFloat());
}

Fixed &Fixed::operator++( void ) {
	(this->_fixedNumber)++;
	return (*this);
}

Fixed &Fixed::operator--( void ) {
	(this->_fixedNumber)--;
	return (*this);
}

Fixed Fixed::operator++( int n ) {
	Fixed temp = *this;
	if (n < 0) {
		--(*this);
	} else
		++(*this);
	return (temp);
}

Fixed Fixed::operator--( int n ) {
	Fixed temp = *this;
	if (n < 0) {
		++(*this);
	} else
		--(*this);
	return (temp);
}

Fixed Fixed::min( const Fixed &a, const Fixed &b ) {
	return (a < b ? a : b);
}

Fixed Fixed::max( const Fixed &a, const Fixed &b ) {
	return (a > b ? a : b);
}