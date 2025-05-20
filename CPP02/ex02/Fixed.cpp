
#include "Fixed.hpp"

Fixed::Fixed() // Default constructor
{
	//std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
}

Fixed::Fixed(const int value) // Constructor with a const int parameter
{
	//std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value) // Constructor with a const float parameter
{
	//std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &src) // Copy constructor)
{
	//std::cout << "Copy constructor called" << std::endl;
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

// getter and setter for _fixedPointValue
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedPointValue;
}
void Fixed::setRawBits(int const raw)
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


//Overload the comparison operators
bool Fixed::operator<(const Fixed &other) const
{
	return this->_fixedPointValue < other._fixedPointValue;
}
bool Fixed::operator>(const Fixed &other) const
{
	return this->_fixedPointValue > other._fixedPointValue;
}
bool Fixed::operator<=(const Fixed &other) const
{
	return this->_fixedPointValue <= other._fixedPointValue;
}
bool Fixed::operator>=(const Fixed &other) const
{
	return this->_fixedPointValue >= other._fixedPointValue;
}
bool Fixed::operator==(const Fixed &other) const
{
	return this->_fixedPointValue == other._fixedPointValue;
}
bool Fixed::operator!=(const Fixed &other) const
{
	return this->_fixedPointValue != other._fixedPointValue;
}

// Overload the arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}
Fixed Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}
Fixed Fixed::operator/(const Fixed &other) const
{
	if (other._fixedPointValue == 0)
	{
		std::cerr << "Error: Division by zero" << std::endl;
		return Fixed(0);
	}
	return Fixed(this->toFloat() / other.toFloat());
}

// Overload the increment and decrement operators
Fixed &Fixed::operator++() // Pre-increment
{
	_fixedPointValue++;
	return *this;
}
Fixed Fixed::operator++(int) // Post-increment
{
	Fixed temp = *this;
	_fixedPointValue++;
	return temp;
}
Fixed &Fixed::operator--() // Pre-decrement
{
	_fixedPointValue--;
	return *this;
}
Fixed Fixed::operator--(int) // Post-decrement
{
	Fixed temp = *this;
	_fixedPointValue--;
	return temp;
}
// Overload the min and max functions
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}

// overload the << operator for printing
std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}