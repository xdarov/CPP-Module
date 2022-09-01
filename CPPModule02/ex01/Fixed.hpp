#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed{

private:
	int	value;
	static const int bits = 8;

public:
	Fixed(const int number);
	Fixed(const float number);
	Fixed();
	~Fixed();
	Fixed(const Fixed &object);
	Fixed &operator = (const Fixed &object);
	int getRawBits( void ) const;
	void setRaw( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<< (std::ostream &out, const Fixed &fix);

#endif
