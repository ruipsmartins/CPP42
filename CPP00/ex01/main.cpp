/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:12:28 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/04/29 17:12:31 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(void)
{
	PhoneBook phoneBook;
	std::string command;

	std::cout << "Welcome to your awesome phonebook!" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;

	while (true)
	{
		std::cout << "\nEnter a command: ";
		std::getline(std::cin, command);

		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContacts();
		else if (command == "EXIT")
			break;
	}

	return 0;
}