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
	Fixed( const int n );
	Fixed( const float n );
	Fixed(const Fixed &f);
	Fixed &operator = (const Fixed &f);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;

	bool operator>( const Fixed &f ) const;
	bool operator<( const Fixed &f ) const;
	bool operator>=( const Fixed &f ) const;
	bool operator<=( const Fixed &f ) const;
	bool operator==( const Fixed &f ) const;
	bool operator!=( const Fixed &f ) const;
	// arithmetic operators
	Fixed operator+(const Fixed &f) const;
	Fixed operator-(const Fixed &f) const;
	Fixed operator*(const Fixed &f) const;
	Fixed operator/(const Fixed &f) const;
	// increment and decrement operators
	Fixed &operator++( void );
	Fixed operator++( int n );
	Fixed &operator--( void );
	Fixed operator--(int);
	// min and max
	static Fixed min( const Fixed &a, const Fixed &b );
	static Fixed max( const Fixed &a, const Fixed &b );
	static Fixed abs( const Fixed &f );
};
std::ostream &operator<<(std::ostream &out, const Fixed &f);
#endif