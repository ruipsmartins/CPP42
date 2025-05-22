/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:46:47 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/22 12:50:17 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"


/* void printFixedInfo(const std::string& name, const Fixed& value) {
	std::cout << name << " -> "
		<< "raw: " << value.getRawBits()
		<< ", float: " << value.toFloat()
		<< ", int: " << value.toInt()
		<< std::endl;
} */

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	/* Fixed a(1);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	printFixedInfo("a", a);
	++a;
	printFixedInfo("++a", a);
	a++;
	printFixedInfo("a++", a);
	printFixedInfo("b", b);
	printFixedInfo("max(a, b)", Fixed::max(a, b)); */
}
