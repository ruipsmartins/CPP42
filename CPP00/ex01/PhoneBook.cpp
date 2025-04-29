#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0), oldestContact(0) {}

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
	std::cout << std::setw(10) << "index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < contactCount; i++)
	{
		std::cout << std::setw(10) << i << "|";

		std::string first_name = contacts[i].getFirstName();
		if (first_name.length() > 10)
			first_name = first_name.substr(0, 9) + ".";
		std::cout << std::setw(10) << first_name << "|";

		std::string lastName = contacts[i].getLastName();
		if (lastName.length() > 10)
			lastName = lastName.substr(0, 9) + ".";
		std::cout << std::setw(10) << lastName << "|";

		std::string nickname = contacts[i].getNickname();
		if (nickname.length() > 10)
			nickname = nickname.substr(0, 9) + ".";
		std::cout << std::setw(10) << nickname << std::endl;
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
		{
			std::cout << "The index is out of range or wrong" << std::endl;
			searchContacts();
		}
	}
	else
	{
		std::cout << "Invalid input. Please enter a valid number." << std::endl;
		searchContacts();
	}
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
