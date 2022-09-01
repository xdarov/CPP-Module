#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{

private:
	int	value;
	static const int bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &object);
	Fixed &operator = (const Fixed &object);
	int getRawBits( void ) const;
	void setRaw( int const raw );
};

#endif
