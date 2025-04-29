#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

PhoneBook::PhoneBook() : contactCount(0), oldestContact(0){}

void PhoneBook::displayContactDetails(int i) const
{
	std::cout << "\nFirst Name: " << contacts[i].getFirstName() << std::endl;
		std::cout << "Last Name: " << contacts[i].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
		std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
		std::cout << "Secret: " << contacts[i].getSecret() << std::endl;
}

void PhoneBook::displayContactList() const
{
	for (int i = 0; i < contactCount; i++)
	{
		std::cout << "First Name: " << contacts[i].getFirstName() << std::endl;
		std::cout << "Last Name: " << contacts[i].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
		std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
		std::cout << "Secret: " << contacts[i].getSecret() << std::endl;
	}
}
void PhoneBook::searchContacts() const
{
	if (contactCount == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	
	displayContactList();
	
	std::string input;
	
	std::cout << "Enter contact index: " << std::endl;
	std::getline(std::cin, input);
	
	std::stringstream ss(input);

	int index;
	if ((ss >> index) && ss.eof())
	{
		if (index >=0 && index < contactCount)
			displayContactDetails(index);
		else
			std::cout <<"index not found" << std::endl;
	}
	else
		std::cout << "Invalid input. Please enter a valid number."<< std::endl;
	
}

void PhoneBook::addContact()
{
	if (contactCount < 2)
	{
		contacts[contactCount].newContact();
		contactCount++;
	}
	else
	{
		contacts[oldestContact].newContact();
		oldestContact = (oldestContact + 1) % 2;
	}
}