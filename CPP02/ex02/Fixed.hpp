#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
	public:
		Fixed(); // Default constructor
		Fixed(const int value); // Constructor with a const int parameter
		Fixed(const float value); // Constructor with a const float parameter
		Fixed(const Fixed &src); // Copy constructor
		Fixed &operator=(const Fixed &src); // Assignment operator
		~Fixed(); // Destructor

		// Overload the comparison operators
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		// Overload the arithmetic operators
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		// Overload the increment and decrement operators
		Fixed &operator++(); // Pre-increment
		Fixed operator++(int); // Post-increment
		Fixed &operator--(); // Pre-decrement
		Fixed operator--(int); // Post-decrement

		// Overload the min and max functions
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		int getRawBits() const; // Getter for _fixedPointValue
		void setRawBits(int const raw); // Setter for _fixedPointValue
		float toFloat() const; // Convert to float
		int toInt() const; // Convert to int
	};
	
	std::ostream &operator<<(std::ostream &os, const Fixed &fixed); // Overload the << operator for Fixed class

#endif