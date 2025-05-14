/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:12:19 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/14 11:12:20 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>


int main (void)
{
	Harl harl;

	std::cout << "Testing complain with 'DEBUG' level:" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\nTesting complain with 'INFO' level:" << std::endl;
	harl.complain("INFO");

	std::cout << "\nTesting complain with 'WARNING' level:" << std::endl;
	harl.complain("WARNING");

	std::cout << "\nTesting complain with 'ERROR' level:" << std::endl;
	harl.complain("ERROR");

	std::cout << "\nTesting complain with 'UNKNOWN' level:" << std::endl;
	harl.complain("UNKNOWN");

	std::cout << "\nTesting complain with empty string:" << std::endl;
	harl.complain("");
	return 0;
}