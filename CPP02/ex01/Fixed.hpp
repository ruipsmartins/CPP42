/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:51:33 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/22 12:51:35 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

		int getRawBits() const; // Getter for _fixedPointValue
		void setRawBits(int const raw); // Setter for _fixedPointValue
		float toFloat() const; // Convert to float
		int toInt() const; // Convert to int
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed); // Overload the << operator for Fixed class

#endif