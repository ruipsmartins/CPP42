/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 10:28:46 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/03/11 14:54:16 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes.hpp"

std::string toUpperCase(std::string str) {
    for (size_t i = 0; i < str.length(); i++) {
        str[i] = std::toupper(str[i]);
    }
    return str;
}

int main (void)
{
	std::string	input;
	PhoneBook book;

	while (1)
	{
		std::cout << "(ADD, SEARCH, EXIT): ";
		std::getline(std::cin, input);
		input=toUpperCase(input);
		if (input == "EXIT")
			break;
		if (input == "ADD")
		{
			std::cout << "input = " << input << std::endl;
			book.ADDContact();
		}
		if (input == "SEARCH")
		{
			std::cout << "input = " << input << std::endl;
			book.SEARCHContacts();
		}
	}
	return 0;
}