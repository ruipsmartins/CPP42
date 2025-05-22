/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:51:49 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/22 12:51:52 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed() // Default constructor
{
	std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &src) // Copy constructor
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src) // Assignment operator
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_fixedPointValue = src.getRawBits();
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
