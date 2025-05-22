/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:51:44 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/22 12:51:48 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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