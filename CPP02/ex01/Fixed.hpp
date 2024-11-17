
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
private:
	int _fixedNumber;
	static const int _fractionalBits = 8;


public:
	Fixed();
	Fixed(const int nb);
	Fixed( const float nb );
	Fixed( const Fixed &other ); //copy constructor
	Fixed &operator=( const Fixed &other ); // copy asigment operator
	~Fixed();
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
#endif