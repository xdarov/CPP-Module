#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = object.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &object) {
	std::cout <<"Copy assignment operator called" << std::endl;
	this->value = object.getRawBits();
	return *this;
}

void Fixed::setRaw(const int raw) {
	this->value = raw;
}