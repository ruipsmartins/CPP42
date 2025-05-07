/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:12:58 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/07 11:19:56 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0), oldestContact(0) {}

PhoneBook::~PhoneBook()
{
	std::cout << "Closing phonebook" << std::endl;
}

void PhoneBook::displayContactDetails(int i) const
{
	std::cout << "\nFirst Name: " << contacts[i].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
	std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Secret: " << contacts[i].getSecret() << std::endl;
}

static std::string formatField(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::displayContactList() const
{
	std::cout << std::setw(10) << "index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < contactCount; i++)
	{
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
				  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
				  << std::setw(10) << formatField(contacts[i].getNickname()) << std::endl;
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
		if (index >= 0 && index < contactCount)
			displayContactDetails(index);
		else
			std::cout << "The index is out of range" << std::endl;
	}
	else
		std::cout << "Invalid input. Please enter a valid number." << std::endl;
}

void PhoneBook::addContact()
{
	if (contactCount < 8)
	{
		contacts[contactCount].newContact();
		contactCount++;
	}
	else
	{
		contacts[oldestContact].newContact();
		oldestContact = (oldestContact + 1) % 8;
	}
}
