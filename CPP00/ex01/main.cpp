/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:12:28 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/07 11:15:24 by ruidos-s         ###   ########.fr       */
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

	while (true)
	{
		std::cout << "\nEnter a command: ADD, SEARCH, EXIT" << std::endl;
		if (!std::getline(std::cin, command) || command.compare("EXIT") == 0)
			break;
		else if (command.compare("ADD") == 0)
			phoneBook.addContact();
		else if (command.compare("SEARCH") == 0)
			phoneBook.searchContacts();
	}

	return 0;
}