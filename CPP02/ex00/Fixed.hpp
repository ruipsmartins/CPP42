#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
	public:
		Fixed(); // Default constructor
		Fixed(const Fixed &src); // Copy constructor
		Fixed &operator=(const Fixed &src); // Assignment operator
		~Fixed(); // Destructor

		int getRawBits() const; // Getter for _fixedPointValue
		void setRawBits(int const raw); // Setter for _fixedPointValue
};



#endif