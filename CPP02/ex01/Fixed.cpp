
#include "Fixed.hpp"

Fixed::Fixed() // Default constructor
{
	std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
}

Fixed::Fixed(const int value) // Constructor with a const int parameter
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value) // Constructor with a const float parameter
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &src) // Copy constructor)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src) // Assignment operator
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_fixedPointValue = src.getRawBits();;
	}
	return *this;
}

Fixed::~Fixed() // Destructor
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const // Getter for _fixedPointValue
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedPointValue;
}
void Fixed::setRawBits(int const raw) // Setter for _fixedPointValue
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPointValue = raw;
}

int Fixed::toInt() const // Convert to int
{
	return _fixedPointValue >> _fractionalBits;
}
float Fixed::toFloat() const // Convert to float
{
	return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) // Overload the << operator for Fixed class
{
	os << fixed.toFloat();
	return os;
}