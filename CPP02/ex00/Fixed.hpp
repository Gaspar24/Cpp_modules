#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
private:
	int _fixedNumber;
	static const int _fractionalBits = 8;

public:
	Fixed();
	//copy constructor
	Fixed(const Fixed &other);
	//copy assigment operator
	Fixed &operator = (const Fixed &other);
	~Fixed();

	int getRawBits(void) const;
	void	setRawBits(int const raw);

};

#endif