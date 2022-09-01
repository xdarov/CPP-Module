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

	bool operator == (const Fixed &object);
	bool operator!= (const Fixed &object);
	bool operator> (const Fixed &object) const;
	bool operator< (const Fixed &object) const;
	bool operator>= (const Fixed &object) const;
	bool operator<= (const Fixed &object) const;
	Fixed operator+ (const Fixed &object);
	Fixed operator- (const Fixed &object);
	Fixed operator* (const Fixed &object);
	Fixed operator/ (const Fixed &object);
	Fixed& operator++ ();
	Fixed operator++ (int);
	Fixed& operator-- ();
	Fixed operator-- (int);

	static const Fixed& max( Fixed const &a,  Fixed const &b);
	static Fixed& max( Fixed &a,  Fixed &b);
	static const Fixed& min( Fixed const &a,  Fixed const &b);
	static Fixed& min( Fixed &a,  Fixed &b);
};

std::ostream &operator<< (std::ostream &out, const Fixed &fix);

#endif
