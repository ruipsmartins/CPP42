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

		if (command == "ADD" || command == "a")
			phoneBook.addContact();
		else if (command == "SEARCH" || command == "s")
			phoneBook.searchContacts();
		else if (command == "EXIT" || command == "e")
			break;

	}

	return 0;
}